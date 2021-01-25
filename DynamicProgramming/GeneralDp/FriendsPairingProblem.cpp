/*
link :https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1#

Given N friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
Note: Since answer can be very large, return your answer mod 10^9+7.


Example 1:

Input:N = 3
Output: 4

*/
class Solution
{
public:
    long long int countFriendsPairings(int n) 
    {   int mod = pow(10,9)+7; 
        // code here
        long long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<n+1;i++)
        {
           dp[i] = ((dp[i-1])%mod + ((i-1)*dp[i-2])%mod)%mod;
        }
        return dp[n];
    }
};    
 
