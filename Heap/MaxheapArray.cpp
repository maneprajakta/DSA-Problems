#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int i,int n)
{
    int left =  2*i+1;
    int right = 2*i+2;
    int largest = i;
    if(arr[i]<arr[left] && left<n)
       { largest=left;
       }
    else
    if(arr[i]<arr[right] && right<n)
      { 
        largest=right;
      }
    if(i!=largest)
    { swap(arr[i],arr[largest]);
      heapify(arr,largest,n);
    }
}

void built_heap(int arr[],int n)
{
    int last=(n/2)-1;
    for(int i=last;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}

int main()
 {
	int n; //size of heap
	cin>>n;
	int arr[n];//elements of heap
    for(int i=0;i<n;i++)
    cin>>arr[i];
    built_heap(arr,n);
    cout<<"After Heapify"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
