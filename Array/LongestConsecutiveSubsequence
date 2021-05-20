/*
link: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#

Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, 
the consecutive numbers can be in any order.
 

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
*/

int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int>s;
      int ans=0;
      
      for(int i=0;i<N;i++)
      {
          s.insert(arr[i]);
      }
      
      int max_c=0;
      
      for(int i=0;i<N;i++)
      {
      if(s.find(arr[i]-1)==s.end())
      {
        int j=arr[i];
        while(s.find(j)!=s.end())
        {
            j++;
        }
        max_c=max(max_c,j-arr[i]);
      }
      }
      return max_c;
    }
