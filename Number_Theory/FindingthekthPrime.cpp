/*
link:https://www.spoj.com/problems/TDKPRIME/

TDKPRIME - Finding the Kth Prime
#sieve-of-eratosthenes

The problem statement is really simple. There are some queries. You are to give the answers.

Input
An integer stating the number of queries Q(equal to 50000), and Q lines follow, each containing one integer K between 1 and 5000000 inclusive.

Output
Q lines with the answer of each query: the Kth prime number.

*/

#include<bits/stdc++.h>
using namespace std;
bool is_prime[90000000];

int main() {
	// your code goes here
	int n = 90000000;
	
	
    is_prime[0]=true;
    is_prime[1]=true;
    
    for(int i=2;i*i<=n;i++)
    {
    	if(!is_prime[i])
    	{
    		for(int j=i*i;j<=n;j=j+i)
    		{
    			is_prime[j]=true;
    		}
    	}
    }
    
    vector<int>primes;
    for(int i=2;i<=n;i++)
    {
    	if(!is_prime[i])
    	{
    		primes.push_back(i);
    	}
    }
    
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		cout<<primes[k-1]<<endl;
	}
	
	return 0;
}
