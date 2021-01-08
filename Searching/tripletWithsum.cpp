class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    
	    sort(arr,arr+n);
	    
	    int ans=0;
	    
	    for(int i=0;i<n-2;i++)
	    {
	        int j=i+1;
	        int k=n-1;
	        while(j<k)
	        {
	            if(arr[i]+arr[j]+arr[k]>=sum)
	            {
	                k--;
	            }
	            else{
	                ans+=(k-j);
	                j++;
	            }
	        }
	    }
	    return ans;
	}
		 

};

/*
Input: N = 6, X = 2
arr[] = {-2, 0, 1, 3}
Output:  2
*/
