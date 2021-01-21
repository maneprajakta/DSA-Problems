/*

link :https://leetcode.com/problems/longest-palindromic-subsequence/
Given a string s, find the longest palindromic subsequence's length in s. You may assume that the maximum length of s is 1000.

Example 1:
Input:

"bbbab"
Output:
4

*/

 int longestPalindromeSubseq(string s) {
        
        string s1 = s;
        reverse(s.begin(),s.end());
        int m = s.length();
        
        int dp[m+1][m+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1]==s[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][m];
    }

