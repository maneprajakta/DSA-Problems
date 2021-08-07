/*

Link;https://leetcode.com/explore/interview/card/top-interview-questions-easy/102/math/744/ 
Count Primes

Solution
Count the number of prime numbers less than a non-negative number, n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

*/
class Solution {
public:
    //mark all non prime numbers
   
    int countPrimes(int n) {
    
        int arr[5000000]={0};
        
        for(int i=2;i*i<n;i++)
        {
            if(arr[i]==0)
            {
                for(int j=i*i;j<n;j=j+i)
                {
                    arr[j] = 1;
                }
            }
        }
        
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(arr[i]==0)
                c++;
        }
        return c;
    }
};
