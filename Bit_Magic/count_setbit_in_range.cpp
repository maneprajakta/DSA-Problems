int largestpowerof2inrange(int n)
{   int x=0;
    while(1<<x <=n )
    {
        x++;
    }
    return x-1;
}

int countSetBits(int n)
{
    // Your logic here
    if(n==0)
    return 0;

    int x = largestpowerof2inrange(n);
    int btill2x = x*(1<<(x-1));
    int msb2xton = n - (1<<x)+1;
    int rest = n - (1<<x);
    
    int ans = btill2x + msb2xton + countSetBits(rest) ;
    return ans;
}


/// leetcode

vector<int> set_bit(int n)
{
    vector<int>v;
    v[0]=0;
    for(int i=1;i<n;i++)
    {  
         v[i]=v[i/2]+i%2;
    }
 return v;
 
 }
