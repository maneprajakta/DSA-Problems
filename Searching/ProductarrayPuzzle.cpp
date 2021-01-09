vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here  
    vector<long long int>v(n,1);
    
    long long int temp1 = 1;
    
    for(int i=0;i<n;i++)
    {
        v[i]=v[i]*temp1;
        temp1=temp1*nums[i];
    }
    
    long long int temp2 = 1;
    
    for(int i=n-1;i>=0;i--)
    {
        v[i]=v[i]*temp2;
        temp2=temp2*nums[i];
    }
    
    return v;
}
