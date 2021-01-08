#include<bits/stdc++.h>
using namespace std;

bool ispossible(int arr[],int n,int x)
{
     set<int>mp;
     
     for(int i = 0; i < n; i++)
    {
        mp.insert(arr[i]);
    }
     
     for(int i=0;i<n;i++)
     {
         if(mp.find(arr[i]+x)!=mp.end())
         return true;
     }
     return false;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int res = ispossible(arr,n,x)==true ? 1:-1;
	    cout<<res<<endl;
	}
	return 0;
}


//second solution


sort 
binary_search


