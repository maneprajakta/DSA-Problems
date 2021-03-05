/*
link:https://practice.geeksforgeeks.org/problems/topological-sort/1
Given a Directed Graph with V vertices and E edges, Find any Topological Sorting of that Graph.

*/

	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    vector<int>inorder(V,0);
	    for(int i=0;i<V;i++)
	    {
	        for(auto x:adj[i])
	        {
	            inorder[x]++;
	        }
	    }
	    
	    queue<int>q;
	    for(int i=0;i<V;i++)
	    { 
	        if(inorder[i]==0)
	        q.push(i);
	    }
	    
	    int count=0;
	    vector<int>ans;

	    while(!q.empty())
	    {
	        count++;
	        for(auto x : adj[q.front()])
	        {
	            inorder[x]--;
	            if(inorder[x]==0)
	            { 
	               q.push(x);
	            }
	        }
	        ans.push_back(q.front());
	        q.pop();
	    }
	    if(count!=V)
	    return {-1};
	    return ans;
	}
