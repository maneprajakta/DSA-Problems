/*

link : https://practice.geeksforgeeks.org/problems/lcs-of-three-strings/0#

Given 3 strings X, Y and Z, the task is to find the longest common sub-sequence in all three given sequences.
Input:
1
5 8 13
geeks geeksfor geeksforgeeks

Output:
5

*/


#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,l;
	    cin>>n>>m>>l;
	    
	    int dp[n+1][m+1][l+1];
	    string x,y,z;
	    cin>>x>>y>>z;
	    
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<m+1;j++)
	        {
	            for(int k=0;k<l+1;k++)
	            {   
	                if(i==0 || j==0 || k==0)
	                dp[i][j][k]=0;
	                else
	                if(x[i-1]==y[j-1] && x[i-1]==z[k-1])
	                {
	                    dp[i][j][k] = 1+dp[i-1][j-1][k-1];
	                }
	                else
	                {
	                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
	                }
	            }
	        }
	    }
	    cout<<dp[n][m][l]<<endl;
	}
	return 0;
}
