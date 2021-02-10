/*
link:https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

*/

int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int j=0;
    for(int i=1;i<=n;i++)
    {
        j=j^i;
    }
    for(auto x:array)
    {
        j^=x;
    }
    return j;
}
