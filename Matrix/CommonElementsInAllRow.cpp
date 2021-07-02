/*
link : https://www.geeksforgeeks.org/common-elements-in-all-rows-of-a-given-matrix/
Given an m x n matrix, find all common elements present in all rows in O(mn) time and one traversal of matrix.
Example: 

Input:
mat[4][5] = {{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };

Output: 
1 8 or 8 1
8 and 1 are present in all rows.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  
    int r,c;
    cin>>r>>c;
  
    vector<int>v;
    
    int arr[r][c];
      
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    map<int,int>mp;
    
    for(int j=0;j<c;j++)
    {
        mp[arr[0][j]]++;
    }
    
    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mp[arr[i][j]]==i)
            {
                mp[arr[i][j]]=i+1;
                if(r-1==i && arr[i][j]==r)
                 v.push_back(arr[i][j]);
            }
        }
    }
    for(auto x:v)
    cout<<x;
    
  return 0;  
}
