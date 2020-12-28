int binarysearch(int arr[], int n, int k){
        // code here
        int beg=0;
        int last = n-1;
        int mid;
        int flag=-1;
        while(beg<=last)
        {
             mid = (beg + (last-beg)/2);
            
             if(arr[mid]==k)
             {   flag=0;
                 return mid;
             }
            
            else{
                
             if(arr[mid]<k)
             {
                 beg=mid+1;
             }
             else{
                 last=mid-1;
             }
            }
        }
        if(flag==-1)
        return -1;
    }
