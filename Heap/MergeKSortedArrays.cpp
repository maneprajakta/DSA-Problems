/*
link:https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#
Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].

*/

#define ppi pair<int,pair<int,int>>

int *mergeKArrays(int arr[][N], int k)
{
//code here

int* v = new int[k*k];
priority_queue<ppi,vector<ppi>,greater<ppi>>pq;

for(int i=0;i<k;i++)
{
    pq.push({arr[i][0],{i,0}});
}

int p=0;
while(!pq.empty())
{
   ppi top = pq.top();
   pq.pop();
   int i = top.second.first;
   int j = top.second.second;
   v[p++] = top.first;
   if(j<k-1)
    pq.push({arr[i][j+1],{i,j+1}});
}

return v;
}
