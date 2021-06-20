/*
link : https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers/

Input:  [12 11 -13 -5 6 -7 5 -3 -6]
Output: [-13 -5 -7 -3 -6 12 11 6 5]

Loop from i = 1 to n - 1.
  a) If the current element is positive, do nothing.
  b) If the current element arr[i] is negative, we 
     insert it into sequence arr[0..i-1] such that 
     all positive elements in arr[0..i-1] are shifted 
     one position to their right and arr[i] is inserted
     at index of first positive element.
     
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key,j;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        
        if(key>0)
        continue;
    
        j = i-1;
        
         while (j >= 0 && arr[j] > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
 
       
        arr[j + 1] = key;
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}
