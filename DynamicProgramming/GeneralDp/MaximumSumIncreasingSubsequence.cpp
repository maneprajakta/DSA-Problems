/*
link:https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#

Given an array arr of N positive integers, the task is to find the maximum sum increasing subsequence of the given array.

Example 1:

Input: N = 5, arr[] = {1, 101, 2, 3, 100} 
Output: 106
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3, 100}


*/

class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	     if(n==0)
	        return 0;
	    int dp[n+1];
	    
	    for(int i=0; i<n; i++)
	        dp[i] = arr[i];
	    
	    for(int i=0;i<n+1;i++)
	    {  dp[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	             dp[i] = max(dp[i],arr[i]+dp[j]);
	        }
	    }
	 return *max_element(dp,dp+n);   
	}  
};
