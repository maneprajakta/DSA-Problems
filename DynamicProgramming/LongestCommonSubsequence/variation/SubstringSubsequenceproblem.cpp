/*
link : https://practice.geeksforgeeks.org/problems/substring-subsequence-problem1631/1#

Find the longest subsequence X of a string A which is a substring Y of a string B.
Input:
A = "ABCD" , B = "BACDBDCD"
Output:
3

*/

 int getLongestSubsequence(string A, string B) {
        // code here
        int m = B.length();
        int n = A.length();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(B[i-1]==A[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
                else
                dp[i][j] = dp[i][j-1];
            }
        }
        int maxe = 0;
        for(int i=1;i<m+1;i++)
        {
            maxe = max(maxe,dp[i][n]);
        }
        return maxe;
    }
