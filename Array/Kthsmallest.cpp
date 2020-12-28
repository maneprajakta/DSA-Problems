int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    int i;

    int h[100001]={0};
    
    for(i=l;i<=r;i++)
    h[arr[i]]++;
    
    int count = 0;
    
    for(i=0;i<100001;i++)
    {
    if(h[i]>0)
    count++;
    
    if(count==k)
    return i;
    }

}
