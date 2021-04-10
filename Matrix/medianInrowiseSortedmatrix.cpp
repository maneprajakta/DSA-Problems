/*
link : https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

*/

int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        
        int mine = INT_MAX;
        int maxe = INT_MIN;
        
        for(int i=0;i<r;i++)
        {
            mine = min(mine,matrix[i][0]);
            maxe = max(maxe,matrix[i][c-1]);
        }
        int mid=0;
        int countexp = (1+r*c)/2;
        int count=0;
        while(mine<maxe)
        {   count=0;
            mid = (mine+maxe)/2;
            
            for(int i=0;i<r;i++)
            {
                count=count+(upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin());
            }
            if(count<countexp)
               mine=mid+1;
            else
               maxe=mid;
        }
        return mine;
    }
