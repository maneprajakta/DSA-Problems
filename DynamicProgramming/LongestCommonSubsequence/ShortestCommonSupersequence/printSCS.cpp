/*
link :https://leetcode.com/problems/shortest-common-supersequence/

Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences.  If multiple answers exist, you may return any of them.
(A string S is a subsequence of string T if deleting some number of characters from T (possibly 0, and the characters are chosen anywhere from T) results in the string S.)

Input: str1 = "abac", str2 = "cab"
Output: "cabac"
*/


class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
    
       int m = str1.length();
       int n = str2.length();
       
       int dp[m+1][n+1];
        
       for(int i=0;i<m+1;i++)
       {
           for(int j=0;j<n+1;j++)
           {
               if(i==0 || j==0 )
                   dp[i][j]=0;
           }
       }
        
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
        
       int i=m;
       int j=n;
       string s;
      
       while(i>0 && j>0)
       {
           if(str1[i-1]==str2[j-1])
           { s=s+str1[i-1];
              i--;
              j--;
           }
           else{
               if(dp[i-1][j]>dp[i][j-1])
               {
                   s=s+str1[i-1];
                   i--;
               }
               else{
                   s=s+str2[j-1];
                   j--;
               }
              }
        }
        while(i>0)
        {
            s=s+str1[i-1];
            i--;
        }
         while(j>0)
        {
            s=s+str2[j-1];
            j--;
        }
        
        reverse(s.begin(),s.end());
        return s;
       } 
        
};
