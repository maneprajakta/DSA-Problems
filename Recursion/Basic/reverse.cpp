#include<bits/stdc++.h>
using namespace std;

void rever(int n)
{  
   cout<<n<<" ";
   if(n==1)
   {
    return;
    }
   rever(n-1);
}

int main()
{
rever(5);
return 0;
}
