#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i);

void buildHeap(int arr[], int n);


void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}



void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} 


void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int largest=i;
      int left = 2*i+1;
      int right = 2*i +2;
      
      
      if(arr[largest]<arr[left] && left<n)
      {
          largest=left;
      }
      if(arr[largest]<arr[right] && right<n)
      {
          largest=right;
      }
      if(i!=largest)
      {
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
}


void buildHeap(int arr[], int n)  { 

    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
   
}
