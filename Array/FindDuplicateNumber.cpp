/*
Link:https://leetcode.com/problems/find-the-duplicate-number/
287. Find the Duplicate Number
Medium

8255

871

Add to List

Share
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0];
        int fast = nums[0];
        
        do
        {   fast = nums[nums[fast]];
            slow = nums[slow];
        }while(slow!=fast);
        
        fast=nums[0];
        
        while(slow!=fast)
         {   fast = nums[fast];
             slow = nums[slow];
        }
        return fast;
    }
};
