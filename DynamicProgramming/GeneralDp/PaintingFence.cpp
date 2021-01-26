/*
link :https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1#
Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 
2 adjacent posts have the same color. Since answer can be large return it modulo 10^9 + 7.

Example 1:

Input:
N=3,  K=2 
Output: 6

*/

class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        long long  dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[1]=k;
        
        long long  same=0;
        long long diff = k;
        long long mod =pow(10,9)+7; 
        for(int i=2;i<n+1;i++)
        {
            same = diff%mod;
            diff = (dp[i-1]*(k-1))%mod;
            dp[i] = (same+diff)%mod;
        }
        
        return (dp[n]%mod);
    }
};
