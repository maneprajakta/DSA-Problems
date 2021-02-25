/*
link:https://practice.geeksforgeeks.org/problems/merge-sort/1

Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.
Example 1:

Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9

*/


void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1 = m-l+1; 
         int n2 = r-m;
         
         int a[n1];
         int b[n2];
         
         int i=0;
         int j=0;
         int k=l;
         
         for(int i=0;i<n1;i++)
         {
             a[i]=arr[l+i];
         }
          
          for(int i=0;i<n2;i++)
         {
             b[i]=arr[m+i+1];
         }
         
         while(i<n1 && j<n2)
         {
             if(a[i]<b[j])
             {
                 arr[k]=a[i];
                 i++;
                 k++;
             }
             else
             {
                 arr[k]=b[j];
                 j++;
                 k++;
             }
         }
         while(i<n1)
         {
             arr[k]=a[i];
             k++;
             i++;
         }
          while(j<n2)
         {
             arr[k]=b[j];
             k++;
             j++;
         }
         
    }
 
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>r)
        return;
        if(l<r)
        {  int mid = (l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
