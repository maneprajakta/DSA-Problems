/*
link : https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

Given an array arr of size N and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
N = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.

*/

    //array arr[] which sums up to X.
    bool check(int arr[],int low,int high,int sum)
    {
        while(low<high)
        {
            if(arr[low]+arr[high]<sum)
            {
                low++;
            }
            else
            if(arr[low]+arr[high]>sum)
            {
                high--;
            }
            else
            if(arr[low]+arr[high]==sum)
            {
                return true;
            }
        }
        return false;
    }
    bool find3Numbers(int arr[], int N, int X)
    {
        //Your Code Here
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            if(check(arr,i+1,N-1,X-arr[i]))
            {
                return true;
            }
        }
        return false;
    }
