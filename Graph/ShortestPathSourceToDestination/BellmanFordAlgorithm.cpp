/*
link - https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1#

Negative weight cycle 
Medium Accuracy: 62.0% Submissions: 5316 Points: 4
Given a weighted directed graph with n nodes and m edges. Nodes are labeled from 0 to n-1, 
the task is to check if it contains a negative weight cycle or not.
Note: edges[i] is defined as u, v and weight.

*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int int_max = 1e9;
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    
	    vector<int>dist(n+1,int_max);
	    dist[0]=0;
	    int change;
	    for(int i=0;i<n-1;i++)
	    {   change=0;
	        for(auto e:edges)
	        {
	        int u = e[0];
	        int v = e[1];
	        int w = e[2];
	        
	        //relaxation
	        dist[v] = min(dist[u]+w,dist[v]);
	        
	        }
	    }
	    for(auto e:edges)
	        {
	        int u = e[0];
	        int v = e[1];
	        int w = e[2];
	        
	        
	        if(dist[u]+w<dist[v])
	        return 1;
	        
	        }
	    
	      
	      return 0;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
} 
