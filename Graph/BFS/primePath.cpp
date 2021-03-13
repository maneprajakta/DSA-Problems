/*
link : https://www.spoj.com/submit/PPATH/
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>primes;
int visited[100001];
int dist[100001];
vector<int>adj[100001];

bool isPrime(int x)
{
   for(int i=2;i*i<=x;i++)
   {
      if(x%i==0)
      return false;
   }   
   return true;
}
bool isValid(int a,int b)
{
   int count=0;
   while(a>0)
   {
     if(a%10 != b%10)
     count++;
     a/=10;
     b/=10;
   }   
  if(count==1)return true;
  return false; 
}
void bildGraph()
{  
   for(int i=1000;i<=9999;i++)
   {
      if(isPrime(i))
      primes.push_back(i);
   }
   for(int i=0;i<primes.size();i++)
   {
      for(int j=i+1;j<primes.size();j++)
      {
         int a = primes[i];
         int b = primes[j];
         
         if(isValid(a,b))
         {
            adj[a].push_back(b);
            adj[b].push_back(a);
         } 
      }
   }
}
void bfs(int v)
{
     queue<int>q;
     q.push(v);
     visited[v]=1;
     dist[v]=0;
     while(!q.empty())
     {
        int curr= q.front();
        q.pop();
        for(auto x:adj[curr])
        {
           if(visited[x]==0)
           {
              visited[x]=1;
              dist[x]=dist[curr]+1;
              q.push(x);
           }
        }
     }
}
int main()
{
int t;
cin>>t;
int a,b;
bildGraph();
while(t--)
{
   cin>>a>>b;
   for(int i=1000;i<=99999;i++)
       {dist[i]=-1;
       visited[i]=0;}
   bfs(a);
   if(dist[b]==-1)
   cout<<"Impossible"<<endl;
   else
   cout<<dist[b]<<endl;
}
return 0;
}
