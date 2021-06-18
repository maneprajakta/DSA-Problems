/*
Array Subset of another array 
link:https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/

Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m.
Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 
It may be assumed that elements in both array are distinct.
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

*/

string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(mp.find(a2[i])!=mp.end() && mp[a2[i]]>-1)
        {
            mp[a1[i]]--;
        }
        else
        return "No";
    }
    return "Yes";
}
