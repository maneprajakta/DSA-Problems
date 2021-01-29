#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
   //base condition
   if(n==1)
   {
     cout<<1<<" ";
     return;
     }
   
   //hypothesis
   print(n-1);
   
   //induction
   cout<<n<<" ";
}

int main()
{
   print(5);   
   return 0;
}
