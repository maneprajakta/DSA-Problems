/*
Link:https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#
Given an integer N, find its factorial.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
*/

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int multiply(int res[1000000],int number,int res_size)
    {
        int carry=0;
        for(int i=0;i<res_size;i++)
        {
            int prod = res[i]*number+carry;
            res[i]=prod%10;
            carry = prod/10;
        }
        while(carry)
        {
            res[res_size++]=carry%10;
            carry/=10;
        }
        return res_size;
    }
    vector<int> factorial(int N){
        // code here
        int res[1000000];
        res[0]=1;
        int res_size=1;
        for(int i=2;i<=N;i++)
        {
            res_size=multiply(res,i,res_size);
        }
        reverse(res,res+res_size);
        
        vector<int>v;
        for(int i=0;i<res_size;i++)
        v.push_back(res[i]);
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
