#include<iostream>
using namespace std;

int findmin(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid;
    
    while(start<=end)
    {
        if(arr[start]<=arr[end])
        return start;
        
        mid = start + (end-start)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;
        
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
          return mid;
          
    else      
        if(arr[mid]<arr[end]) 
           end=mid-1;
        else
           start=mid+1;
    }
  return -1;
}

int bs(int arr[],int n,int x,int start,int end)
{
   
    int mid;
    
    while(start<=end)
    {
        mid = start + (end-start)/2;
        
        if(arr[mid]==x)
           return mid;
         
        if(x<arr[mid])
        end=mid-1;
        else 
        start=mid+1;
    }
    return -1;
}

int main()
 {
    int t;
    cin>>t;
    
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       int k;
       cin>>k;
       int mid = findmin(arr,n);
       if(mid!=-1)
       {
       int a = bs(arr,n,k,0,mid-1);
       int b = bs(arr,n,k,mid,n-1);
       a!=-1?cout<<a<<endl:cout<<b<<endl;
       }
       else{cout<<mid<<endl;}
    }
    
	return 0;
}
