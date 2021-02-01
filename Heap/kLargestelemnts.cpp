/*
link:https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

Given an array Arr of N positive integers, find K largest elements from the array.  The output elements should be printed in decreasing order.

Example 1:

Input:
N = 5, K = 2
Arr[] = {12, 5, 787, 1, 23}
Output: 787 23

*/


vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    vector<int>v;
    priority_queue<int,vector<int>,greater<int>>minh;
    
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            minh.pop();
        }  
    }
    while(!minh.empty())
    {
      v.push_back(minh.top());
      minh.pop();
    }
    reverse(v.begin(),v.end());
    return v;
}
