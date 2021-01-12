int bsfirst(vector<long long> &v, long long x)
{
    int res=-1;
    int first=0;
    int last=v.size()-1;
    int mid;
    
    while(first<=last)
    {
        mid = first +(last-first)/2 ;
        
        if(v[mid]==x)
        {   res=mid;
            last = mid-1;
        }
        else{
            if(x>v[mid])
            first=mid+1;
            else if(x<v[mid])
            last=mid-1;
        }
    }
    return res;
}

int bslast(vector<long long> &v, long long x)
{
    int res=-1;
    int first=0;
    int last=v.size()-1;
    int mid;
    
    while(first<=last)
    {
        mid = first +(last-first)/2 ;
        
        if(v[mid]==x)
        {   res=mid;
            first = mid+1;
        }
        else{
            if(x>v[mid])
            first=mid+1;
            else if(x<v[mid])
            last=mid-1;
        }
    }
    return res;
}

pair<long,long> Indexes(vector<long long> &v, long long x)
{
    // Your code goes here
    int a = bsfirst(v,x);
    int b = bslast(v,x);
    return {a,b};
}
