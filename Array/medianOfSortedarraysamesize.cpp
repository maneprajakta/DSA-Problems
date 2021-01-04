#include<bits/stdc++.h>
using namespace std;

int median(int arr1[],int arr2[],int n)
{
   int m1=-1;
   int m2=-1;
   int i=0;
   int j=0;
   int count;
   for(count=0;count<=n;count++)
   {
      if(i==n)
      {
        m1=m2;
        m2=arr2[0];
        break;
      }
      else if(j==n)
      {
        m1=m2;
        m2=arr1[0];
        break;
      }
      if(arr1[i]<=arr2[j])
      {    m1=m2;
           m2=arr1[i];
           i++;
      } 
      else{
           m1=m2;
           m2=arr2[j];
           j++;
      }
      }
      return (m1+m2)/2;
}

int main()
{
  int arr1[] = {1, 12, 15, 26, 38}; 
  int arr2[] = {2, 13, 17, 30, 45};
  cout<<median(arr1,arr2,5);
 return 0;
}
