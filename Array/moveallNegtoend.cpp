#include<bits/stdc++.h>
using namespace std;
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
        {
            cin>>arr[i];
        }
        
        vector<int>v;
        
        for(auto x:arr)
        {
            if(x>=0)
            v.push_back(x);
        }
        for(auto x:arr)
        {
            if(x<0)
            v.push_back(x);
        }
        for(auto x :v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
	return 0;
}
