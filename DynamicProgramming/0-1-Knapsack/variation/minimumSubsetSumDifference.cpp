	int minDiffernce(int arr[], int n) 
	{ 
	    // Your code goes here
	    int end = 0;
	    int sum = accumulate(arr,arr+n,end);
	    
	    bool dp[n+1][sum+1];
	    
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<sum+1;j++)
	        {
	            if(i==0)
	            dp[i][j]=false;
	            if(j==0)
	            dp[i][j]=true;
	        }
	    }
	    
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<sum+1;j++)
	        {
	            if(arr[i-1]<=j)
	            dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j] ;
	            else
	            dp[i][j] = dp[i-1][j];
	        }
	    }
	    int diff = INT_MAX;
	    
	    for(int i=0;i<=sum/2;i++)
	    {
	        if(dp[n][i]==true && (abs(sum-2*i) < diff))
	            diff = abs(sum-2*i);
	    }
	    return diff;
	} 
