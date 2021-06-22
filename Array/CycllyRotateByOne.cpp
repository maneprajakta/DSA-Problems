/*
link : https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#
Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/
void rotate(int arr[], int n)
{ 
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;
}
