int findFloor(vector<long long> v, long long n, long long x){
    
    // Your code here
    int start=0;
    int end=n-1;
    int mid;
    int res=-1;
    while(start<=end)
    {   
        mid = start + (end-start)/2;
        if(v[mid]==x)
          return mid;
        if(x>v[mid])
        {
            res=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return res;
}
