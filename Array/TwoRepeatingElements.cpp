/*
link : https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1#

You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. 
Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

Example 1:

Input:
N = 4
array[] = {1,2,1,3,4,3}
Output: 1 3
Explanation: In the given array, 
1 and 3 are repeated two times.

*/


 pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here
        pair<int,int>p;
        vector<int>v;
        for(int i=0;i<=N+1;i++)
        {
            int temp = abs(arr[i]);
            if(arr[temp]<0)
            v.push_back(temp);
            arr[temp]=-arr[temp];
        }
        p.first = v[0];
        p.second = v[1];
        
        return p;
    }
