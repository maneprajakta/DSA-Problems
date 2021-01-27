/*
link:https://www.geeksforgeeks.org/count-subsequences-product-less-k/
Input : [1, 2, 3, 4] 
        k = 10
Output :11 
*/


#include<bits/stdc++.h>
using namespace std;
int subseqk(int arr[],int k,int n)
{
    int dp[k+1][n+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=1;i<k+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            dp[i][j] = dp[i][j-1];
            if(arr[j-1]<=i)
            {
                dp[i][j] = dp[i][j]+dp[i/arr[j-1]][j-1]+1;
            }
        }
    }
    return dp[k][n];
}

int main()
{   int arr[4]={1,2,3,4};
    cout<<subseqk(arr,10,4);
    return 0;
}
