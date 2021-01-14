  bool subsetsum(int arr[],int N,int sum)
    {
        bool dp[N+1][sum+1];
        
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                dp[i][j]=false;
                if(j==0)
                dp[i][j]=true;
            }
        }
        
        for(int i=1;i<N+1;i++)
          {
              for(int j=1;j<sum+1;j++)
              {
                  if(arr[i-1]<=j)
                  dp[i][j]= dp[i-1][j]||dp[i-1][j-arr[i-1]];
                  else
                  dp[i][j]= dp[i-1][j];
              }
          }        
        return dp[N][sum];  
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int end=0;
        int sum = accumulate(arr,arr+N,end);
        if(sum%2!=0)
        return 0;
        else
        {sum=sum/2;
        if(subsetsum(arr,N,sum))
          return 1;
        return 0;
        }
    }
