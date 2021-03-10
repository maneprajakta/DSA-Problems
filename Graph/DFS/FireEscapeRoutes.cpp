/*
link:
https://www.codechef.com/problems/FIRESC
*/


#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;
int sc_count;


void dfs(int node,bool visited[],vector<int>adj[])
{   sc_count++;
    visited[node]=true;
    for(auto x:adj[node])
    {
        if(visited[x]==false)
        {
            dfs(x,visited,adj);
        }
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a,b;
	    bool visited[n+1]={false};
	    vector<int>adj[n+1];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a>>b;
	        adj[a].push_back(b);
	        adj[b].push_back(a);
	    }
	    int cc=0;
	    int res=1;
	    for(int i=1;i<n+1;i++)
	    {
	        if(visited[i]==false)
	        {   sc_count=0;
	            cc++;
	            dfs(i,visited,adj);
	            res=(res*sc_count)%mod;
	        }
	    }
	    cout<<cc<<" "<<res<<endl;
	}
	return 0;
}
