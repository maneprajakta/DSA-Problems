 int findTargetSumWays(vector<int>& nums, int S) {
        
        int n = nums.size();
        int zero = 0;
        int sumarray = 0;
        
        for(auto x:nums)
        {
            if(x==0)
                zero++;
            else
                sumarray+=x;
        }
        
        if(sumarray<S || (sumarray+S)%2 !=0)
            return 0;
        
        int sum = (S+sumarray)/2;
        
        int dp[n+1][sum+1];
        
        for(int j=0;j<sum+1;j++)
        {
            dp[0][j]=false;
        }
        
        for(int i=0;i<n+1;i++)
        {
            dp[i][0]=true;
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(nums[i-1]<=j && (nums[i-1]  != 0))
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return pow(2,zero)*dp[n][sum];
    }
