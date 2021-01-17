#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int lcs(string x ,string y ,int m,int n)
{
    if(m==0 || n==0)
    return 0;
    
    if(dp[m][n]!=-1)
    return dp[m][n];
    
    if(x[m-1]==y[n-1])
    return dp[m][n] = 1+lcs(x,y,m-1,n-1);
    else
    return dp[m][n] = max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));
}

int main() {
	// your code goes here
	string x,y;
	cin>>x>>y;
	int m = x.length();
	int n = y.length();
	memset(dp,-1,sizeof(dp));
	cout<<lcs(x,y,m,n);
	return 0;
}
