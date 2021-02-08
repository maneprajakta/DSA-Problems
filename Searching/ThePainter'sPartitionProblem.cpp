/*

link:https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1/?track=md-searching&batchId=144#

Dilpreet wants to paint his dog's home that has n boards with different lengths. 
The length of ith board is given by arr[i] where arr[] is an array of n integers.
He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board.
The problem is to find the minimum time to get this job done if all painters start together with the constraint that
any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.

Example 1:

Input:
n = 5
k = 3
arr = {5,10,30,20,15}
Output: 35



*/

int painterCount(int arr[],int n,int maxv)
{
    int sum=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>maxv)
        {
            count++;
            sum=arr[i];
        }
        
    }
    return count;
}

int minTime(int arr[], int n, int k)
{
    // code here
    // return minimum time
    
    int maxe=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxe)
        maxe=arr[i];
    }
    
    
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int start = maxe;
    int end = sum;
    int mid=0;
    int mintime=-1;
    
    while(start<=end)
    {
        mid = (start+(end-start)/2);
        int noOfpainter = painterCount(arr,n,mid);
        
        if(noOfpainter>k)
        start=mid+1;
        else{
            mintime = mid;
            end=mid-1;
        }
    }
    
    return mintime;
}
