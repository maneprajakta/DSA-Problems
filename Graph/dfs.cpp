/*
link:https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#
Given a connected undirected graph. Perform a Depth First Traversal of the graph.
*/

  void dfsrec(vector<int>adj[],int s, vector<bool>visited,vector<int>&ans)
  {
      visited[s]=true;
      ans.push_back(s);
      for(auto x:adj[s])
      {
          if(!visited[x])
          dfsrec(adj,x,visited,ans);
      }
  }
    
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<int>ans;
	    vector<bool>visited(V,false);
	    
	    dfsrec(adj,0,visited,ans);
	    return ans;
	}

/* iterative */

vector<int>dfs(int V, vector<int> adj[]){
	    
  stack<int>s;
  vector<int>ans;
  vector<bool>visited(V,false);
  
  s.push(0);
  int flag=0;
  ans.push_back(s.top());
  while(!s.empty())
  {
     flag=0;
     for(auto x:adj[s.top()])
     {
        if(visited[x]==false)
        {
           s.push(x);
           ans.push_back(x);
           flag=1;
           visited[x]=true;
           break;
        }
     }
     if(flag==0)
       s.pop();
  }
  return ans;
  }
