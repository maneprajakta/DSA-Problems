/*
link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
*/

#include<bits/stdc++.h>
using namespace std;
pair<int,int> find_maxmin(int arr[],int size)
{
    int min,max;
    int start=0;

    if(size==1)
    {
        return {arr[0],arr[0]};
    }
   // if size is even    
    if(size%2==0)
    {
        if(arr[0]>arr[1])  
        {min=arr[1];
         max=arr[0];
        }
        else{
            min=arr[0];
            max=arr[1];
        }
        start=2;
    }  // if size is odd
    else{
        min = arr[0];
        max = arr[0];
        start=1;
    }
    for(int i=start;i<size;i=i+2)
    {
        if(arr[i]>arr[i+1])    // first comparison
        {
            if(arr[i]>max)     // second comparison
            max=arr[i];
            if(arr[i+1]<min)    // third comparison
            {
                min=arr[i+1];
            }
        }
        if(arr[i+1]>arr[i])
        {
            if(arr[i+1]>max)
            max=arr[i+1];
            if(arr[i]<min)
            {
                min=arr[i];
            }   
        }
    }

    return {max,min};    //3(n-2)/2 for even 3(n-2)/2 + 1
}


int main() {
	//code
	
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	cin>>arr[i];
	pair<int,int>res = find_maxmin(arr,size);
	cout<<res.first<<" "<<res.second;
	return 0;
}
