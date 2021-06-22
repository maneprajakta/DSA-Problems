/*
link : https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.


Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9


*/

/*
Approaches : 
1.Naive by calculating sum for each subarray :
int ms = int_min;
for(int i=0;i<n;i++)
{
  for(int j=i;j<n;j++)
  {     s=0;
       for(int k=i;k<=j;k++)
         {s=s+arr[k];}
       if(s>ms)
        ms = s;
  }
}
tc = O(n3)


2.prefix sum :

i=1 se indexing
int pref[n+1];
pref[0]=0;
for(int i=1;i<n+1;i++)
{
  pref[i] = pref[i-1]+arr[i];
}

for(int i=1;i<n+1;i++)
{
  for(int j=i;j<n+1;j++)
  {     s = pref[i-1]-pref[j];
        if(s>ms)
        ms = s;
  }   
}
tc : O(n2)

}

3.Kaden's :O(n)
*/

int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_far = INT_MIN;
        int max_incl = 0;
        
        for(int i=0;i<n;i++)
        {
            max_incl = max(arr[i],max_incl+arr[i]);
            max_far = max(max_far,min_incl);
        }
        return max_far;
    }
