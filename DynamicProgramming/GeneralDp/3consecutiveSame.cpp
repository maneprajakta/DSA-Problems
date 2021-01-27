/*
link:https://www.geeksforgeeks.org/maximum-subsequence-sum-such-that-no-three-are-consecutive/
Given a sequence of positive numbers, find the maximum sum that can be formed which has no three consecutive elements present.

Examples :

Input: arr[] = {1, 2, 3}
Output: 5
We can't take three of them, so answer is
2 + 3 = 5

*/

#include<bits/stdc++.h>
using namespace std;
int subseqAdjacent(int arr[],int n)
{
   int dp[n];
   if(n>=1)
   dp[0]=arr[0];
   if(n>=1)
   dp[1]=arr[1]+arr[0];
   if(n>2)
   dp[2]=max(dp[0],max(arr[2]+arr[1],arr[2]+arr[0]));
   
   for(int i=3;i<n;i++)
   {
       dp[i] = max(dp[i-1],max(dp[i-2]+arr[i-1],dp[i-3]+arr[i-2]+arr[i-1]));
   }
   return dp[n-1];
}

int main()
{   int arr[3]={1,2,3};
    cout<<subseqAdjacent(arr,3);
    return 0;
}
