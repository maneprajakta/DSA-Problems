/*

 link :https://codezen.codingninjas.com/practice/697/2165/k-th-largest-sum-contiguous-subarray

K-th Largest Sum Contiguous Subarray
Level MEDIUM
Given an array of integers. Write a program to find the K-th largest sum of contiguous subarray within the array of numbers which has negative and positive numbers.
Examples:
Input

a[] = {20, -5, -1} 
k = 4
Output

 -1
*/

int kthLargestSum(int arr[], int n, int k)
{
    int sum[n+1];
    sum[0]=0;
    sum[1]=arr[0];
    for(int i=2;i<=n;i++)
    {
        sum[i]=sum[i-1]+arr[i-1];
    }
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int x = sum[j]-sum[i-1];
            if(q.size()<k)
            {
                q.push(x);
            }
            else
            if(q.top()<x)
            {
                q.pop();
                q.push(x);
            }
        }
    }
    
    return q.top();
}

