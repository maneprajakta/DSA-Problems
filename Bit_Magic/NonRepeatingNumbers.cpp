/*
link:https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1#

Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct.
Find the other two numbers.

Example 1:

Input: 
N = 2
arr[] = {1, 2, 3, 2, 1, 4}
Output:
3 4 
Explanation:
3 and 4 occur exactly once.

*/

 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int x = nums[0];
        
        for(int i=1;i<nums.size();i++)
        x^=nums[i];
        
        int right_most_set_bit = x & ~(x-1);
        
        int a=0;
        int b=0;
        int y=0;
        
        for(int i=0;i<nums.size();i++)
        {
            y=nums[i];
            if((right_most_set_bit & nums[i])!=0)
            {
                a^=y;
            }
            else
            b^=y;
        }
        if(a>b)
        return {b,a};
        return {a,b};
    }
