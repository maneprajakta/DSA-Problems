/*
Link:https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1#
Given an NxN matrix Mat. Sort all elements of the matrix.

Example 1:

Input:
N=4
Mat=[[10,20,30,40],
[15,25,35,45] 
[27,29,37,48] 
[32,33,39,50]]
Output:
10 15 20 25 
27 29 30 32
33 35 37 39
40 45 48 50
*/

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>ans;
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                ans.push_back(Mat[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        int k=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Mat[i][j]=ans[k];
                k++;
            }
        }
        return Mat;
    }
};
