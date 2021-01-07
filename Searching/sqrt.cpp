#include<bits/stdc++.h>
using namespace std;

int floorsqrt(int n)
{
   int start=0;
   int end = n;
   int mid;
   int ans;
   
   if(n==0 || n==1)
   return n;
   
   while(start<=end)
   {
       mid = (start+end)/2;
       
       if(mid*mid==x)
       { rerturn mid;}
       
       if(mid*mid <  x)
       {  mid = mid+1;
          ans=mid;
       }
         else{
         end=mid-1;
         }
   }
return ans;
}

int main()
{  int n;
   cin>>n;
   cout<<floorsqrt(n);
   return 0;
 }
   
   
   return 0;
}
