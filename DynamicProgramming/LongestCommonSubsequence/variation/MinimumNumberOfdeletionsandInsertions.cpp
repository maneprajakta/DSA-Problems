/*
link:https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1#

Given two strings str1 and str2. The task is to remove or insert the minimum number of characters from/in str1 so as to transform it into str2.
It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.

Input: str1 = "heap", str2 = "pea"
Output: 3

*/

int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int  m = str1.length();
	    int n = str2.length();
	    
	    int dp[m+1][n+1];
	    memset(dp,0,sizeof(dp));
	    
	    for(int i=1;i<m+1;i++)
	    {
	        for(int j=1;j<n+1;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	               dp[i][j] = 1 + dp[i-1][j-1];
	            else
	              dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    return  m + n - 2*dp[m][n];
	} 
