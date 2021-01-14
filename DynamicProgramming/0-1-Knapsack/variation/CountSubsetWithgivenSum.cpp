#define mod 1000000007
class Solution{

	public:
	
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int dp[n+1][sum+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                dp[i][j] = (dp[i-1][j-arr[i-1]])%mod + (dp[i-1][j])%mod;
                else
                dp[i][j]=dp[i-1][j];
            }
    	}
	  return dp[n][sum]%mod;
	}
};
