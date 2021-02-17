/*
link:https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1
A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.

Example 1:

Input:
N = 1
Output: 1

*/
long long countWays(int n){
    
    // your code here
    long long dp[n+1];
    
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(int i = 4; i <= n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])%1000000007;
    }
    
    return dp[n];
}
