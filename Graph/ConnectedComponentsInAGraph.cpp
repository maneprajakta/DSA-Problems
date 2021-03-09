/*
link: https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

Problem
Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. 
total number of edges in the graph. Calculate the total number of connected components in the graph.
A connected component is a set of vertices in a graph that are linked to each other by paths.

Input Format:

First line of input line contains two integers n and e. 
Next e line will contain two integers u and v meaning that node u and node v are connected to each other in undirected fashion. 

Output Format:

For each input graph print an integer x denoting total number of connected components.
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
int main()
{  int n,e;
   cin>>n>>e;
   vector<int>adj[n+1];
   int a,b;
   while(e--)
   {
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   bool visited[n+1] ={false};
   int count=0;

   for(int i=1;i<n+1;i++)
   { 
       if(visited[i]==false)
       {   dfs(i,adj,visited);
           count++;
       }
   }
   cout<<count;
   return 0;
}
