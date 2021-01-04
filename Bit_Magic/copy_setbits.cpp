#include<bits/stdc++.h>
using namespace std;

//first mask for bit in range

int countSet(int x,int y , int l,int r)
{
     int mask = (1<<(r-l+1));
     mask = mask-1;
     mask = (mask<<(l-1));
     mask = (mask & y);
     x=x|mask;
     return x;
}

int main()
{
   cout<<countSet(10,13,2,3);
   return 0;
}
