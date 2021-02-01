/*

link:https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7

*/

int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    priority_queue<int>q;
    
    for(int i=l;i<=r;i++)
    {
            q.push(arr[i]);
            if(q.size()>k)
            q.pop();
    }
  
    return q.top();
}
