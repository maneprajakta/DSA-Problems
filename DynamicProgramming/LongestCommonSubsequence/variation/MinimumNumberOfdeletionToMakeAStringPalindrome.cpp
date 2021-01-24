/*
link:https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions/0#
Given a string 'str' of size ‘n’. The task is to remove or delete minimum number of characters from the string so that the resultant string is palindrome.
Note: The order of characters should be maintained.

Input:

1

7

aebcbda

Output:

2

*/

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
	    string s;
	    cin>>s;
	    string s1=s;
	    reverse(s.begin(),s.end());
	    int dp[n+1][n+1];
	    memset(dp,0,sizeof(dp));
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<n+1;j++)
	        {
	            if(s[i-1]==s1[j-1])
	            {
	                dp[i][j]=1+dp[i-1][j-1];
	            }
	            else
	            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    cout<<n-dp[n][n]<<endl;
	}
	return 0;
}
