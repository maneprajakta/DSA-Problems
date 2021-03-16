/*

Carol is learning chess and has difficulty with knight move. Her teacher gave her an practice.
Take two random squares from chess board and try to take a knight from one square to the other with the least number of moves.

Help Carol with a program that evaluates the minimum number of moves a knight needs to travel from one square to another.

Input:
2
a1 b1
g8 f6

Output:
3
1

*/

#include <bits/stdc++.h>
using namespace std;
int vis[10][10];
int dist[10][10];
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int targetX,targetY;


int getX(char a)
{
    return a-'a'+1;
}

bool isvalid(int x,int y)
{
    if(x>8 || y>8 || x<1 || y<1)
    return false;
    
    if(vis[x][y]==1)
    return false;
return true;
}

int bfs(int x,int y)
{
    vis[x][y]=1;
    dist[x][y]=0;
    
    queue<pair<int,int>>q;
    q.push({x,y});
    
    if(x==targetX && y==targetY) return dist[x][y];
    
    while(!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();
    
        
        for(int i=0;i<8;i++)
        {
            if(isvalid(currX+dx[i],currY+dy[i]))
            {
                x = currX+dx[i];
                y = currY+dy[i];
                vis[x][y]=1;
                dist[x][y]=1+dist[currX][currY];
                q.push({x,y});
                
                if(x==targetX && y==targetY) return dist[x][y];
            }   
        }
    }
}
int main() {
	// your code goes here
	int t,srcX,srcY;
	cin>>t;
	while(t--)
	{
	    for(int i=1;i<9;i++){
	        for(int j=1;j<9;j++)
	        {
	            vis[i][j]=0;
	            dist[i][j]=0;
	        }
	    }
	    
	    char a,b;
	    
	     cin>>a>>b;
	     srcX = getX(a);
	     srcY = b-'0';
       
        cin>>a>>b;
        targetX = getX(a);
        targetY= b-'0';
        
 	    cout<<bfs(srcX,srcY)<<endl;
	}
	return 0;
}

