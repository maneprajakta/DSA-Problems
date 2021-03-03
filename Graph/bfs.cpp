/*
link:https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#


*/

vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    queue<int>q;
	    vector<bool>visited(V+1,false);
	    vector<int>ans;
	    
	    q.push(0);
	    while(!q.empty())
	    {
	        for(auto node:adj[q.front()]){
	            if(!visited[node]){
	            q.push(node);
	            visited[node]=true;
	            }
	        }
	         ans.push_back(q.front());
	         q.pop();
	    }
	   
	    return ans;
	}
