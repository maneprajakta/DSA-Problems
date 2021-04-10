/*
link : https://leetcode.com/problems/search-a-2d-matrix/

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

*/

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0;
        int j=n-1;
        
        while(i>=0 && j>=0 && i<m )
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                   j--;
            else if(matrix[i][j]<target)
                i++;
        }
        return false;
        
    }
