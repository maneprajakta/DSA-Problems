/*
link: https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1#
The problem is to find shortest distances between every pair of vertices in a given edge weighted directed Graph.
The Graph is represented as adjancency matrix, and the matrix denotes the weight of the edegs (if it exists) else -1. Do it in-place.
 

Example 1:

Input: matrix = {{0,25},{-1,0}}
Output: {{0,25},{-1,0}}
Explanation: The shortest distance between
every pair is already given(if it exists).

*/


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    #define INF 100000000
	    for (int i = 0; i < matrix.size(); i++) {
          for (int j = 0; j < matrix.size(); j++)
                if (matrix[i][j] == -1)
                matrix[i][j] = INF;
                }
        for (int k = 0; k < matrix.size(); k++) {
        for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
        }
        }
        }
        for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++)
        if (matrix[i][j] == INF)
             matrix[i][j] = -1;
        }
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends
