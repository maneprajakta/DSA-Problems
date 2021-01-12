class Solution{
public:	
    int bs(int arr[], int n)
    {
        int start = 0;
        int end = n-1;
        int mid;
        int next,prev;
        while(start<=end)
        {
            if(arr[start]<=arr[end])
               return start;
               
            mid = start + (end-start)/2;
            
            next = (mid+1)%n;
            prev = (mid+n-1)%n;
            
            if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
            return mid;
            
            else{
                if(arr[mid]<arr[end])
                {
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        return -1;
    }
    
	int findKRotation(int arr[], int n) {
	    // code here
	    return bs(arr,n);
	}
