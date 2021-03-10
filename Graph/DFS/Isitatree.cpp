/*
link:https://www.spoj.com/problems/PT07Y/
You are given an unweighted, undirected graph. Write a program to check if it's a tree topology.

Input
The first line of the input file contains two integers N and M --- number of nodes and number of edges in the graph (0 < N <= 10000, 0 <= M <= 20000). 
Next M lines contain M edges of that graph --- Each line contains a pair (u, v) means there is an edge between node u and node v (1 <= u,v <= N).

Output
Print YES if the given graph is a tree, otherwise print NO.

*/

#include<bits/stdc++.h>
using namespace std;

void dfs(int s,vector<int>adj[],bool visited[])
{
    visited[s]=true;
    for(auto x:adj[s])
    {
    	if(visited[x]==false)
    	dfs(x,adj,visited);
    }
}
int main() {

    int n,m;
    cin>>n>>m;
    
    vector<int>adj[n+1];
    int a,b;
    for(int i=0;i<m;i++)
    {
    	cin>>a>>b;
    	adj[a].push_back(b);
    	adj[b].push_back(a);
    }
    bool visited[n+1]={false};
    int count=0;
    for(int i=1;i<n+1;i++)
    {
       if(visited[i]==false)
       {
       	dfs(i,adj,visited);
       	count++;
       }
    }
    
    if(count==1 && m == n-1)
    cout<<"YES";
    else
    cout<<"NO";
   
   return 0;
}
