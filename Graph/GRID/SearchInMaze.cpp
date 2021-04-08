/*
link:https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

Rat in a Maze Problem - I 
Medium Accuracy: 37.73% Submissions: 46703 Points: 4
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). 
Find all possible paths that the rat can take to reach from source to destination. 
The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). 
Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents 
that rat can be travel through it.
Note: In a path, no cell can be visited more than one time.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.
*/

vector<string>v;
class Solution{
    public:
    void dfs(int i,int j,string s,vector<vector<int>>m,int n,vector<vector<int>>&vis)
    {
        if(i<0 || j<0 || i>=n || j>=n)return;
        if(m[i][j]==0 || vis[i][j]==1)return;
        if(i==n-1 && j==n-1)
        {v.push_back(s);
         return;
        }
        vis[i][j]=1;
        dfs(i+1,j,s+'D',m,n,vis);
        dfs(i-1,j,s+'U',m,n,vis);
        dfs(i,j-1,s+'L',m,n,vis);
        dfs(i,j+1,s+'R',m,n,vis);
        
        vis[i][j]=0;
         
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        v.clear();
        
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(m[0][0]==0)return v;
        if(m[n-1][n-1]==0)return v;
        
        string s="";
        dfs(0,0,s,m,n,vis);
        sort(v.begin(),v.end());
        return v;
    }
};

