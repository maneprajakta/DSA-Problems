/*
link:https://leetcode.com/explore/featured/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3765/
Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where they are divided into non-empty substrings such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.
*/

class Solution {
public:
    int dp[101][101];
    bool solve(string s1,string s2,string s3,int n,int m,int len)
    {
        if(len==0)return 1;
        if(dp[n][m]!=-1) return dp[n][m];
            
        int a,b;
        a=0;
        b=0;
        if(n-1>=0 && s1[n-1]==s3[len-1]) a=solve(s1,s2,s3,n-1,m,len-1);
        if(m-1>=0 && s2[m-1]==s3[len-1]) b=solve(s1,s2,s3,n,m-1,len-1);
        return dp[n][m]=a||b;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        
        int n=s1.length();
        int m=s2.length();
        int len = s3.length();
        
        memset(dp,-1,sizeof(dp));
        
        if(n+m!=len)
            return 0;
    
        return solve(s1,s2,s3,n,m,len);
    }
};
