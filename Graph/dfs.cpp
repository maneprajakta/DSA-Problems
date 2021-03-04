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

vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
    bool vis[V]={false};
    vector<int>ans;
    stack<int> st;
    st.push(0);
    ans.push_back(0);
    vis[0]=1;
    while(!st.empty()){
        int top=st.top();
        int flag=0;
        for(auto x:adj[top]){
            if(vis[x]!=1){
                st.push(x);
                ans.push_back(x);
                vis[x]=1;
                flag=1;
                break;
            }
        }
        if(!flag) st.pop();
  }
  return ans;
  }
