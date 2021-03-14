/*
https://www.spoj.com/submit/TOPOSORT/

Sandro is a well organised person. Every day he makes a list of things which need to be done and enumerates them from 1 to n. 
However, some things need to be done before others. In this task you have to find out whether Sandro can solve all his duties 
and if so, print the correct order.

Input

In the first line you are given an integer n and m (1<=n<=10000, 1<=m<=1000000). On the next m lines there are two distinct integers
x and y, (1<=x,y<=10000) describing that job x needs to be done before job y.

Output

Print "Sandro fails." if Sandro cannot complete all his duties on the list. 
If there is a solution print the correct ordering, the jobs to be done separated by a whitespace.
If there are multiple solutions print the one, whose first number is smallest, if there are still multiple solutions,
print the one whose second number is smallest, and so on.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10001];
int inorder[10001];

vector<int> khans(int n)
{   vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=1;i<=n;i++)
    {
       if(inorder[i]==0)
       q.push(i);
    }
    int c=0;
    while(!q.empty())
    {  c++; 
       int curr=q.top();
       ans.push_back(q.top());
       q.pop();
       for(int x:adj[curr])
       {
          inorder[x]--;
          if(inorder[x]==0)
          q.push(x);
       }
       
    }
    if(c!=n)
    return {-1};
    return ans;
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
  inorder[b]++;
}
vector<int>k=khans(n);
if(k.size()==1 && k[0]==-1)
cout<<"Sandro fails."<<endl;
else{
for(auto x:k)
cout<<x<<" ";}
return 0;
}
