/*

link:https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1#

Suppose you have N eggs and you want to determine from which floor in a K-floor building you can 
drop an egg such that it doesn't break. You have to determine the minimum number of attempts you need in order find the critical 
floor in the worst case while using the best strategy.There are few rules given below. 

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the eggs breaks at a certain floor, it will break at any floor above.

Example 1:

Input:
N = 2, K = 10
Output: 4


*/

int dp[11][51] ;

int solve(int e, int f){
    if(f == 0 || f == 1 || e == 1)
        return f;
    if(dp[e][f] != -1)
        return dp[e][f];
    
    int mini = INT_MAX;
    for(int k=1; k<=f; k++){
        int tmp = 1 + max(solve(e-1, k-1), solve(e, f-k));
        mini = min(mini, tmp);
    }
    return dp[e][f] = mini;
}

int eggDrop(int n, int k) 
{
    // your code here
    memset(dp, -1, sizeof(dp));
    return solve(n, k);
}
