/*
link:https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#
Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
*/

vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<int>ans;
	    queue<int>q;
	    q.push(0);
	    bool visited[V];
	    visited[0]=true;
	    ans.push_back(0);
	    while(!q.empty())
	    {
	        int top = q.front();
	        q.pop();
	        for(auto x:adj[top])
	        {
	            if(!visited[x])
	            {   ans.push_back(x);
	                visited[x]=true;
	                q.push(x);
	            }
	        }
	    }
	    return ans;
	}
