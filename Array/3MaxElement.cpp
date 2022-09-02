//https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3231/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
      set<int>S(nums.begin(),nums.end());
      priority_queue<int>pq(S.begin(),S.end());
      if(pq.size()==1 || pq.size()==2)return pq.top();
       pq.pop();
        pq.pop();
        return pq.top();
    }
};
