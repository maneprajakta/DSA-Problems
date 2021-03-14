#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int visited[100];
int low[100];
int in[100];
int timer;
vector<pair<int,int>>ans;

void dfs(int node,int parent)
{
   visited[node]=1;
   low[node]=in[node]=timer;
   timer++;
   for(int child:adj[node])
   {
      if(child==parent)continue;
      if(visited[child]==1)
      {  // edge node-child is backedge 
         low[node] = min(low[node],in[child]);
      }
      else{
          dfs(child,node);
          if(low[child]>in[node])
	      {
	        ans.push_back({node,child}); //bridge edge
	      }
	 low[node] = min(low[node],low[child]);
      }
   }
}

int main()
{
int n,m;
cin>>n>>m;

int a,b;
while(m--)
{
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
}
dfs(1,-1);
for(auto x:ans)
{
  cout<<x.first<<" - "<<x.second<<endl;
}
return 0;
}
