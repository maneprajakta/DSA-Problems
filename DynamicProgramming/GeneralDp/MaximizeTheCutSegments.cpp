/*
link:https://practice.geeksforgeeks.org/problems/cutted-segments1642/1#

Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers.
After performing all the cut operations, your total number of cut segments must be maximum.

Example 1:

Input:
N = 4
x = 2, y = 1, z = 1
Output: 4
Explanation:Total length is 4, and the cut
lengths are 2, 1 and 1.  We can make
maximum 4 segments each of length 1.


*/

int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
   int dp[n+1];
   memset(dp,-1,sizeof(dp));
   dp[0]=0;
   for(int i=1;i<n+1;i++)
   {
       if(i-x>=0)
       dp[i]=max(dp[i],dp[i-x]);
        if(i-y>=0)
       dp[i]=max(dp[i],dp[i-y]);
        if(i-z>=0)
       dp[i]=max(dp[i],dp[i-z]);
        if(dp[i]!=-1)
        dp[i]++;
   }
   if(dp[n]==-1)
   return 0;
  return dp[n];
}
