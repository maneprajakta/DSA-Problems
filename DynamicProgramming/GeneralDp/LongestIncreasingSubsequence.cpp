/*
link:https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1#

Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

Example 1:

Input:
N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
Explanation:Longest increasing subsequence
0 2 6 9 13 15, which has length 6

*/

// without bs

int longestSubsequence(int n, int a[])
{
   // your code here
   if(n == 0 || n == 1)
        return n;
    int inc[n];
    for(int i = 0; i < n ;i++)
        inc[i] = 1;
    for(int i = 1; i < n ;i ++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[j] < a[i])
                inc[i] = max(inc[j]+1, inc[i]);
        }
    }
    return *max_element(inc, inc+n);
}
