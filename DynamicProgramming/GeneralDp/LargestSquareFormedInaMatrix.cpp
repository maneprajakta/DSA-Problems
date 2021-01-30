/*

link : https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1
Given a binary matrix mat of size n * m, find out the maximum size square sub-matrix with all 1s.

Example 1:

Input: n = 2, m = 2
mat = {{1, 1}, 
       {1, 1}}
Output: 2
Explaination: The maximum size of the square
sub-matrix is 2. The matrix itself is the 
maximum sized sub-matrix in this case.

*/


    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int largest = 0;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(mat[i-1][j-1]==1)
                {
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                    if(dp[i][j]>largest)
                    {
                        largest=dp[i][j];
                    }
                }
            }
        }
        return largest;
    }
