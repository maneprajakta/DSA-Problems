/*
link:https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
Given two arrays a[] and b[] of size n and n respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in union.

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3

Output: 
5

Union
if arrary is sorted use the fact:
while(i<n && j<m)
{
    if same i++,j++
    if arr[i]<arr[j] i++
    if arr[j]<arr[i] j++
}
while(i<n)
while(j<m)
    
same for intersection    
*/

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        
        
        for(int i=0;i<m;i++)
        {
           s.insert(b[i]);
        }
        
        return s.size();
    }
