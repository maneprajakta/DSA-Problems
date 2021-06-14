/*
link :https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
link  https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/tutorial/
Given a weighted, undirected and connected graph of V vertices and E edges. 
The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

*/

#define pii pair<int,int>
int spanningTree(int V,int E,vector<vector<int>> &graph)
{
   vector<bool> vis(V);
   vector<int> key(V , INT_MAX);
   key[0]=0;
   
   priority_queue<pii,vector<pii>,greater<pii>> pq;
   pq.push({0,0});
   
   int wt=0;
   while(pq.size())
   {
       int x=pq.top().second;
       
       pq.pop();
       
       if(!vis[x])
       {
            vis[x]=true;
            
            wt+=key[x];
           
           for(int i=0 ; i < V ; i++)
           if(!vis[i] && key[i] > graph[x][i])
           {
               key[i] = graph[x][i];
               
               pq.push({key[i] , i});
           }
       }
   }
   return wt;
}
