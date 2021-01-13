int peakElement(int arr[], int n)
{
   // Your code here
   int start=0;
   int end=n-1;
   
   while(start<=end)
  {
   int mid = start+(end-start)/2;
   
   if((arr[mid-1]<=arr[mid] || mid==0)&&(arr[mid+1]<=arr[mid] || mid==n-1))
      return mid;
   
    else   
    if(arr[mid]<=arr[mid+1])
        start=mid+1;    
    else 
    if(arr[mid-1]>=arr[mid])
    end=mid-1;
  }
return -1;
}
