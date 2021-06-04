/*
link : https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/

Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j=0;
        int n = nums.size();
        
        if((n==0)||(n==1))
         return n; 
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
        }
        nums[j++]=nums[n-1];
        return j;
    }
};
