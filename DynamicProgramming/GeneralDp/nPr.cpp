/*
P(n, k) = P(n-1, k) + k* P(n-1, k-1)
*/

// Returns value of Permutation 
// Coefficient P(n, k)
#include<bits/stdc++.h>
using namespace std;
int permutationCoeff(int n, int k) 
{ 
  int dp[n+1][k+1];
  memset(dp,0,sizeof(dp));
  for(int i=0;i<n+1;i++)
  {
      for(int j=0;j<=min(i,k);j++)
      {
          if(j==0)
          {
              dp[i][j]=1;
          }
          else
          dp[i][j]= dp[i-1][j]+(j*dp[i-1][j-1]);
      }
  }
  return dp[n][k];
} 
  
// Driver Code 
int main() 
{ 
    int n,k;
    cin>>n>>k;
    cout<<"Permutation is:"<<permutationCoeff(n,k);
    return 0; 
} 
