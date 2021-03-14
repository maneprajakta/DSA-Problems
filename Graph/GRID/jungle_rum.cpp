/*
https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/jungle-run/
bfs on grid

5
S P P P P
T P T P P
T P P P P
P T E T T
P T P T T
Sample Output
5

*/
#include<bits/stdc++.h>
using namespace std;
char adj[31][31];
int visited[31][31];
int dist[31][31];
int n;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isvalid(int x,int y)
{ 
  if(x>n || y>n || x<1 || y<1)
  return false;
  if(visited[x][y] || adj[x][y]=='T')
  return false;
return true;
}

void bfs(int srcx,int srcy)
{
   visited[srcx][srcy]=1;
   dist[srcx][srcy]=0;
   queue<pair<int,int>>q;
   q.push({srcx,srcy});

   while(!q.empty())
   {
       int x=q.front().first;
       int y=q.front().second;
       int d = dist[x][y];
       q.pop();

        for(int i=0;i<4;i++)
        {     int newx = x+dx[i];
              int newy = y+dy[i];
              if(isvalid(newx,newy))
              {
                dist[newx][newy]=1+d;
                visited[newx][newy]=1;
                q.push({newx,newy});
              }
        }
   }
   
}
int main()
{  
    cin>>n;
    int srcx,srcy,destx,desty;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>adj[i][j];
            if(adj[i][j]=='S')srcx=i,srcy=j;
            if(adj[i][j]=='E')destx=i,desty=j;
        }
    }
    bfs(srcx,srcy);
    cout<<dist[destx][desty];
    return 0;
}
