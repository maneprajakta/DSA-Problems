/*
Problem Description

Given an integer array A containing N integers.

You need to divide the array A into two subsets S1 and S2 such that the absolute difference between their sums is minimum.

Find and return this minimum possible absolute difference.

*/


int Solution::solve(vector<int> &A) {
    int n = A.size();    
    int sum=0;
    for(auto x:A)
      sum+=x;
    
    int dp[n+1][sum+1];
    for(int j=0;j<sum+1;j++)
        dp[0][j]=false;
    for(int i=0;i<n+1;i++)
        dp[i][0]=true;
        
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(A[i-1]<=j)
            dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
            else
            dp[i][j] = dp[i-1][j];
        }
    }
    
    int diff = 1000000;
    for(int i=0;i<=sum/2;i++)
    {
        if(dp[n][i]==true && abs(sum-2*i)<diff)
        diff=sum-2*i;
    }
    return diff;
}

