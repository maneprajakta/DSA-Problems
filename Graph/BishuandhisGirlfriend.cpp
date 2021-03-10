/*
link:https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
Problem
There are N countries {1,2,3,4....N} and N-1 roads(i.e depicting a tree)

Bishu lives in the Country 1 so this can be considered as the root of the tree.

Now there are Q girls who lives in various countries (not equal to 1) .

All of them want to propose Bishu.But Bishu has some condition.

He will accept the proposal of the girl who lives at minimum distance from his country.

Now the distance between two countries is the number of roads between them.

If two or more girls are at the same minimum distance then he will accept the proposal of the girl who lives in a country with minimum id.

No two girls are at same country.

Input: First line consists of N,i.e number of countries Next N-1 lines follow the type u v which denotes there is a road between u and v. Next line consists of Q Next Q lines consists of x where the girls live.

Output: Print the id of the country of the girl who will be accepted.

*/

#include<bits/stdc++.h>
using namespace std;

void dfs(int node,int dist,bool visited[],int distance[],vector<int>adj[])
{
    visited[node]=true;
    distance[node]=dist;
    for(auto x:adj[node])
    {
        if(!visited[x])
        {
            dfs(x,distance[x]+1,visited,distance,adj);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>adj[n+1];
    bool visited[n+1]={false};
    int distance[n+1]={0};

    int a,b;
    
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0,visited,distance,adj);
    int q;
    cin>>q;
    int maxe=INT_MAX;
    int girl,node=INT_MAX;
    while(q--)
    {
      cin>>girl;
      if(distance[girl]<=maxe)
      {
           maxe=distance[girl];
           if(node>girl)
           node=girl;
      }
    }
    cout<<node;
    return 0;
}
