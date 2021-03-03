#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>adj[],int u,int v)
{  
   adj[u].push_back(v);
   adj[v].push_back(u);
}

void print(vector<int>adj[],int v)
{
   for(int i=0;i<v;i++)
   {
      cout<<i<<"->";
      for(auto x:adj[i])
      cout<<x<<"->";
      cout<<endl;
  }
}
int main()
{ int v=5;
  vector<int>adj[v];
  addedge(adj,0,1);
  addedge(adj,0,2);
  addedge(adj,2,3);
  addedge(adj,1,4); 
  print(adj,v);
  return 0; 
}
