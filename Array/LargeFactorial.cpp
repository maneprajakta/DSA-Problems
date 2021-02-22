/*
link: https://practice.geeksforgeeks.org/problems/large-factorial4721/1

You are given an array A of integers of length N. You need to calculate factorial of each number. 
The answer can be very large, so print it modulo 109 + 7.

Example 1:

Input:
N = 5
A[] = {0, 1, 2, 3, 4}
Output:
1 1 2 6 24

*/

void fact(ll size,ll dp[])
{
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<size+1;i++)
    dp[i]=(dp[i-1]*i)%1000000007;
}

class Solution{
public:
	vector<ll>factorial(vector<ll> a, int n) {
		
		ll size = *max_element(a.begin(),a.end());
		ll dp[size+1];
		vector<ll>ans;
		fact(size,dp);
		for(int i=0;i<n;i++)
		{
		   ans.push_back(dp[a[i]]);
		}
		return ans;
	}
};
