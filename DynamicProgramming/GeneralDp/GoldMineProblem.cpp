/*
link : https://www.geeksforgeeks.org/gold-mine-problem/
Given a gold mine of n*m dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. 
Initially the miner is at first column but can be at any row. He can move only (right->,right up /,right down\) that is from a given cell, the miner can move to the cell diagonally up towards the right or right or diagonally down towards the right. Find out maximum amount of gold he can collect.

Examples:

Input : mat[][] = {{1, 3, 3},
                   {2, 1, 4},
                  {0, 6, 4}};
Output : 12 
{(1,0)->(2,1)->(2,2)}

*/

#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 100; 
int getMaxGold(int gold[][MAX], int m, int n) 
{ 
   int dp[m][n];
   memset(dp,0,sizeof(dp));
   
   for(int col=n-1;col>=0;col--)
   {
       for(int row=0;row<m;row++)
       {
           int front = (col==n-1)?0:dp[row][col+1];
           int right_up = (col==n-1||row==0)?0:dp[row-1][col+1];
           int right_down = (row==m-1||col==n-1)?0:dp[row+1][col+1];
           dp[row][col] = gold[row][col]+max(front,max(right_up,right_down));
       }
   }
   int maxe = dp[0][0];
   for(int i=1;i<m;i++)
   {
           maxe=max(maxe,dp[i][0]);
   }
   return maxe;
}   
int main() 
{ 
    int gold[MAX][MAX]= {{1, 3, 3},
                   {2, 1, 4},
                  {0, 6, 4}};
    int m = 3, n = 3; 
    cout << getMaxGold(gold, m, n); 
    return 0; 
} 
