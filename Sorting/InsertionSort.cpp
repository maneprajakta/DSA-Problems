/*
link : https://practice.geeksforgeeks.org/problems/insertion-sort/1

The task is to complete the insert() function which is used to implement Insertion Sort.


Example 1:

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

*/


void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++)
        {
            int key = arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                  arr[j+1]=arr[j];
                  j--;
            }
            arr[j+1]=key;
        }
    }
