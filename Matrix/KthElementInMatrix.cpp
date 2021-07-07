/*
https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1#
Kth element in Matrix 
Medium Accuracy: 49.98% Submissions: 17134 Points: 4
Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

Example 1:
Input:
N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
Output: 27
Explanation: 27 is the 3rd smallest element.

*/

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int,vector<int>,greater<int>>q;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          q.push(mat[i][j]);
      }
  }
  
  while(k!=1)
  {
      q.pop();
      k--;
  }
  
  return q.top();
}
