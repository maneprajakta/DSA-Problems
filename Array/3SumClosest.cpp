/*

link : https://leetcode.com/problems/3sum-closest/

Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
Return the sum of the three integers. You may assume that each input would have exactly one solution.

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

*/

 int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
      int ans = 0;
      int diff = INT_MAX;
      int n = nums.size();
      for(int i = 0; i < n; i++){
         int left = i + 1;
         int right = n - 1;
         while(left < right){
            int temp = nums[left] + nums[right] + nums[i];
            if(abs(target - temp) < diff){
               ans = temp;
               diff = abs(target - temp);
            }
            if(temp == target)return temp;
            else if(temp > target) right--;
            else left++;
         }
      }
      return ans;
        
    }
