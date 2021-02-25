/*
link : https://practice.geeksforgeeks.org/problems/quick-sort/1

Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position low and its ending position high.

Implement the partition() and quickSort() functions to sort the array.


Example 1:

Input: 
N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

*/

void quickSort(int arr[], int low, int high)
    {
       if(low<high)
       {
           int pi = partition(arr,low,high);
           quickSort(arr,low,pi-1);
           quickSort(arr,pi+1,high);
       }
    }
    

    int partition (int arr[], int low, int high)
    {
        int i=low-1;
        int pivot = arr[high];
        for(int j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {   i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
