/*
link: https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1

Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.
Note: X and Y can have both uppercase and lowercase letters.

Example 1

Input:
X = abcd, Y = xycd
Output: 6

*/


int shortestCommonSupersequence(char* X, char* Y, int m, int n) {
    //code here
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<n+1;j++)
    {
        dp[0][j]=0;
    }
    
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(X[i-1]==Y[j-1])
            dp[i][j] = 1+dp[i-1][j-1];
            else
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return (m+n-dp[m][n]);
}
