/*
link:https://www.codechef.com/problems/PRB01
Input
The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

Output
For each test case output in a separate line, "yes" if the number is prime else "no."
*/

#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if(n==1 || n==0)
	  return false;
    for(int i=2;i*i<=n;i++)
	  {
	      if(n%i==0)return false;
	  }
    return true;
}
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  if(is_prime(n))
	  cout<<"yes"<<endl;
	  else
	  cout<<"no"<<endl;
	}
	return 0;
}
