/*
link :https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum/0

Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.


Example 1:

Input:
N = 7
arr[] = {8,-8,9,-9,10,-11,12}
Output:
22

*/

int circularSubarraySum(int arr[], int n){
    
    // your code here
   int sum=0;
   int total_sum=0;
   int max_sum=INT_MIN;
   for(int i=0;i<n;i++)
   {
       sum=sum+arr[i];
       max_sum=max(sum,max_sum);
       if(sum<0)
       sum=0;
       
       total_sum+=arr[i];
   }
   
   sum=0;
   int min_sum=INT_MAX;
   for(int i=0;i<n;i++)
   {
       sum=sum+arr[i];
       min_sum=min(sum,min_sum);
       if(sum>0)
       sum=0;
   }
    
    int second_max = total_sum-min_sum;
     
    if(second_max==0)
    return max_sum;
    else
    return max(second_max,max_sum);
}
