
//----------------------------------------   Swap all odd and even bits 

unsigned int swapBits(unsigned int n)
{
	
	// Your code here
	
	int even = n&0xAAAAAAAA;
	int odd  = n&0x55555555;
	
	even = even>>1;
	odd = odd<<1;
	
	return even+odd;
	
}

// Set kth bit

int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1<<K;
        return (N|mask);
    }

//  count the number of bits needed to be flipped to convert A to B.

int countBitsFlip(int a, int b){
    
    // Your logic here
    int num = a^b;
    
    return __builtin_popcount(num);
    
}

// Swap two nibbles in a byte

int swapNibbles(unsigned char x){
        // code here
        unsigned char one = x>>4;
        unsigned char two = x<<4;
        return one|two;
    }
    
// Longest Consecutive 1's

int maxConsecutiveOnes(int x)
{
 
    // Your code here
    int count = 0;
    while(x)
    {
        x=x&(x<<1);
        count++;
    }
    return count;    
}

// is power of 2
bool isPowerofTwo(long long n){
    
    // Your code here    
    return !(n&(n-1));
}

// Find position of set bit 

 bool isPowerOf2(int n)
    {
        if(n==0)
        return false;
        
        return (!(n&(n-1)));
    }
  
    int findPosition(int n) {
        // code here
       if(isPowerOf2(n))
       return ceil(log2(n))+1;
       else
       return -1;
    }
    
