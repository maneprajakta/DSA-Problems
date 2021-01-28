/*

link : https://practice.geeksforgeeks.org/problems/interleaved-strings/1#

Given three strings A, B and C your task is to complete the function isInterleave which returns true 
if C is an interleaving of A and B else returns false. C is said to be interleaving A and B, if it contains all characters of A and B and order of
all characters in individual strings is preserved.

Example 1:

Input:
A = YX, B = X, C = XXY
Output: 0
Explanation: XXY is not interleaving
of YX and X

*/

int dp[101][101];

int solve(string X,string Y,string Z,int i,int j,int k)
{
    int n = X.length();
    int m = Y.length();
    int l = Z.length();
    
    //base condition
    if(i==n && j==m && k==l)
    return true;
    else
    if(k==l)
    return false;
    
    bool res=false;
    
    if(dp[i][j]!=-1)
    return dp[i][j];
    
    if(i<n && X[i]==Z[k])
    res = res || solve(X,Y,Z,i+1,j,k+1);
    
    if(j<m && Y[j]==Z[k])
    res = res || solve(X,Y,Z,i,j+1,k+1);

    return dp[i][j]=res;    
}

bool isInterleave(string A, string B, string C) 
{     memset(dp,-1,sizeof(dp));
      return solve(A,B,C,0,0,0);
}
