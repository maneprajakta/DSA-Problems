bool isvalid(int *arr,int n,int max,int m)
{
    int stud=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>max)
       { stud++;
         sum=arr[i];
       }
        if(stud>m)
        {
            return false;
        }
    }
    return true;
}

int findPages(int *arr, int n, int m) {
    //code here
    if(m>n)return -1;
    int start = *max_element(arr,arr+n);
    int end = 0;
    end = accumulate(arr,arr+n,end);
    int res=-1;
    while(start<=end)
    {   int mid = start + (end-start)/2;
    
        if(isvalid(arr,n,mid,m))
        {   res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
