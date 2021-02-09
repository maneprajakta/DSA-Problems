/*
link:https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/?track=md-arrays&batchId=144

Given an array A of N elements. Find the majority element in the array.
A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1

*/

int majorityElement(int arr[], int size)
{
    // your code here
    
    int majo = 0;
    int count =1;
    for(int i=1;i<size;i++)
    {
        if(arr[i]==arr[majo])
        {
            count++;
        }
        else
        {
            count-=1;
            if(count==0)
            {
            majo=i;
            count =1;
            }
        }
    }
    int c=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[majo])
        c++;
    }
    
    if(c>size/2)
    return arr[majo];
    else
    return -1;
}
