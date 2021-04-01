/*

input:
6 9
1 2 4
1 6 2
2 3 5
2 6 1
6 3 8
6 5 10
3 4 6
3 5 3
5 4 5

output:
0 3 8 14 11 2

*/

#include<bits/stdc++.h>
#define INF 1000000000

using namespace std;
vector<pair<int,int>>adj[1001];

int main()
{
   int m,n,a,b,w;
   cin>>n>>m;
   
   while(m--)
   {
      cin>>a>>b>>w;
      adj[a].push_back({b,w});
      adj[b].push_back({a,w});
   }
   
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; //cost,node
vector<int>dist(n+1,INF);
pq.push({0,1});
dist[1]=0;

while(!pq.empty())
{
   int curr = pq.top().second;
   int curr_d = pq.top().first;
   pq.pop();
   
   for(auto edge:adj[curr])
   {
     if(curr_d+edge.second < dist[edge.first])
     {
        dist[edge.first]=curr_d+edge.second;
        pq.push({dist[edge.first],edge.first});
     }
   }
}
  
  for(int i=1;i<=n;i++)
  cout<<dist[i]<<" ";

return 0;
}   
