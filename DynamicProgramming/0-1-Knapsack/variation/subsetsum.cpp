#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            dp[i][j]=false;
            if(j==0)
            dp[i][j]=true;
        }
        
    }
    //main code
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
            else
            dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main()
{
   int n; 
   cout<<"Enter size of array"<<endl;
   cin>>n;
   int arr[n];
   cout<<"Enter array Elements"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int sum;
   cout<<"What sum ?"<<endl;
   cin>>sum;
   if(subsetsum(arr,n,sum)==true)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
   return 0;
}
