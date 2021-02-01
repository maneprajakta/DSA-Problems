/*

link : https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1#

Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example 1:

Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 

*/

vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    //priority_queue<int,vector<int>,greater<int>()>q;
    
    deque<int>q(k);
    vector<int>v;
    
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        
        q.push_back(i);
    }
    
    for(int i=k;i<n;i++)
    {
        v.push_back(arr[q.front()]);
        
        while(!q.empty() && q.front()<=(i-k))
        {
            q.pop_front();
        }
        while(!q.empty() && arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    
    v.push_back(arr[q.front()]);
    return v;
}
