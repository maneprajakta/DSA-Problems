/*
link :https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1#

Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.

*/

// Complete this function
long long int count(long long int n)
{
	long long int dp[4][n+1];
	               // If 0 sum is required number of ways is 1.
	
	// Your code here
	int coin[3] = {3,5,10};
	
    for(int i=0;i<4;i++)
    {
        dp[i][0]=1;
    }
    for(int j=0;j<n+1;j++)
    {
        dp[0][j]=0;
    }
	
	for(int i=1;i<4;i++)
	{
	    for(int j=1;j<n+1;j++)
	    {
	        if(coin[i-1]<=j)
	        {
	            dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];
	        }
	        else
	           dp[i][j] = dp[i-1][j];
	    }
	}
	return dp[3][n];
}
