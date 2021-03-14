/*
https://cses.fi/problemset/task/1192/

You are given a map of a building, and your task is to count the number of its rooms. 
The size of the map is n×m squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.

Input

The first input line has two integers n and m: the height and width of the map.

Then there are n lines of m characters describing the map. Each character is either . (floor) or # (wall).

Output

Print one integer: the number of rooms.
*/

#include<bits/stdc++.h>
using namespace std;

char adj[10001][10001];
int visited[10001][10001];
int n,m;
bool isvalid(int x,int y)
{
   if(x>n || y>m || x<1 || y<1)
   return false;
   if(adj[x][y]=='#' || visited[x][y]==true)
   return false;
 return true;
}

int xd[] = {-1,0,1,0};
int yd[] = {0,1,0,-1};
void dfs(int x,int y)
{
  visited[x][y]=1;
  for(int i=0;i<4;i++)
  {
    if(isvalid(x+xd[i],y+yd[i]))
    {
      dfs(x+xd[i],y+yd[i]);
    }
  }
}
int main()
{

cin>>n>>m;

for(int i=1;i<=n;i++)
{
  for(int j=1;j<=m;j++)
  {  cin>>adj[i][j];
  }  
}
int cnt=0;

for(int i=1;i<=n;i++)
{
  for(int j=1;j<=m;j++)
  {  if(adj[i][j]=='.' && visited[i][j]==0)
  {   cnt++;
      dfs(i,j);
  } 
  }  
}
cout<<cnt;
return 0;
}
