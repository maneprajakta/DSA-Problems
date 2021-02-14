/*
link:https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

Given a square matrix[][] of size N x N. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.

Example 1:

Input:
N = 3
matrix[][] = [[1 2 3],
              [4 5 6],
              [7 8 9]]
Output:
3 6 9 
2 5 8 
1 4 7

*/

void rotate(vector<vector<int>>& matrix)
{
    // Your code goes here
   for(int i=0;i<matrix.size();i++)
   {
       reverse(matrix[i].begin(),matrix[i].end());
   }
   
   for(int i=0;i<matrix.size();i++)
   {
       for(int j=i;j<matrix[0].size();j++)
       {
           swap(matrix[i][j],matrix[j][i]);
       }
   }
   
}
