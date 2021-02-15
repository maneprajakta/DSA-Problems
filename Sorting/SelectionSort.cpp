/*
link : https://practice.geeksforgeeks.org/problems/selection-sort/1#
Given an unsorted array of size N, use selection sort to sort arr[] in increasing order by repeatedly selecting the minimum element 
from unsorted subarray and putting it in the sorted subarray. 

Example 1:

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9

*/

void selectionSort(int arr[], int n)
{
   int min_index=0;
    
   for(int i=0;i<n-1;i++)
   {   min_index=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min_index])
           {
               min_index=j;
           }
       }
       swap(&arr[i],&arr[min_index]);
   }
   
}


//----------------------------------------------------------------- stable selection sort

void selectionSort(int arr[], int n)
{
   int min_index=0;
    
   for(int i=0;i<n-1;i++)
   {   min_index=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min_index])
           {
               min_index=j;
           }
       }
       int min = arr[min_index];
       while(min_index>i)
       {
           arr[min_index] = arr[min_index-1];
           min_index--;
       }
       arr[i]=min;
   }
   
}
