/*
link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#

Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2

*/

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    for(int j = 0;j<m;j++)
	    { 
	        for(int i=0;i<n;i++)
	        {
	            if(arr[i][j]==1)
	              return i;
	        }
	        
	    }
	    return -1;
	}


//second approach

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   int j=m-1;
	   
	   while(j>=0 && arr[0][j]==1)
	   {
	       j--;
	   }
	   int row=0;
	   for(int i=1;i<n;i++)
	   {
	       while(j>=0 && arr[i][j]==1)
	       {
	           j--;
	           row=i;
	       }
	   }
	   return j==m-1?-1:row;
	}
