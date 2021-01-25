/*
link: https://practice.geeksforgeeks.org/problems/ncr1019/1#

Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 


*/

class Solution{
public:
    int nCr(int n, int r){
        // code here
        int dp[n+1][r+1];
        memset(dp,0,sizeof(dp));
        int mod = pow(10,9)+7;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<=min(i,r);j++)
            {   
                if(j==0 || j==i)
                dp[i][j] = 1;
                else
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j])%mod; 
            }
        }
        return dp[n][r];
    }
};
