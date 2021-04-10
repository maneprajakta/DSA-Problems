/*
link:https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1


Spirally traversing a matrix 
Medium Accuracy: 48.39% Submissions: 27716 Points: 4
Given a matrix of size R*C. Traverse the matrix in spiral form.

Example 1:

Input:
R = 4, C = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/

 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>v;
        
        int left=0;
        int right=c-1;
        int top=0;
        int bottom=r-1;
        
        while(1)
        {
            if(left>right)
               break;
            for(int i=left;i<=right;i++)
            {
                v.push_back(matrix[top][i]);
            }
            top++;
            
            if(top>bottom)
            break;
             for(int i=top;i<=bottom;i++)
            {
                v.push_back(matrix[i][right]);
            }
            right--;
            
            if(left>right)
            break;
             for(int i=right;i>=left;i--)
            {
                v.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            if(top>bottom)
            break;
             for(int i=bottom;i>=top;i--)
            {
                v.push_back(matrix[i][left]);
            }
            left++;
            
        }
        return v;
    }
