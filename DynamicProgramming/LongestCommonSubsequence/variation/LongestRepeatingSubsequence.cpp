/*

link: https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#
Given a string str, find length of the longest repeating subseequence such that the two subsequence don’t have same string 
character at same position, i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.

Input: str = "axxxy"
Output: 2

*/

int LongestRepeatingSubsequence(string str){
		    // Code here
		    string s1 =str;
		    int n = s1.length();
		    
		    int dp[n+1][n+1];
		    memset(dp,0,sizeof(dp));
		    
		    for(int i=1;i<n+1;i++)
		    {
		        for(int j=1;j<n+1;j++)
		        {
		            if(s1[i-1]==str[j-1] && i!=j)
		            dp[i][j] = 1+ dp[i-1][j-1];
		            else
		            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		        }
		    }
		    return dp[n][n];
		}
