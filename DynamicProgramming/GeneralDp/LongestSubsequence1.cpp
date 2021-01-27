/*

link:https://practice.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1#

Given an array A[] of size N, find the longest subsequence such that difference between adjacent elements is one.


Example 1:

Input: N = 7
A[] = {10, 9, 4, 5, 4, 8, 6}
Output: 3
Explaination: The three possible subsequences 
{10, 9, 8} , {4, 5, 4} and {4, 5, 6}.

*/


    int longestSubsequence(int N, int A[])
    {
        // code here
        int dp[N+1];
        for(int i=0;i<N+1;i++)
        dp[i]=1;

        for(int i=1;i<N+1;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(abs(A[i]-A[j])==1)
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        return *max_element(dp,dp+N+1);
    }
