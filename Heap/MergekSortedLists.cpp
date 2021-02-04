/*
link:https://leetcode.com/problems/merge-k-sorted-lists/
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it. 

Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]

*/

class Solution {
public:
  struct comp
{
    bool operator()(const ListNode *lhs, const ListNode *rhs) const
    {
        return lhs->val > rhs->val;
    }
};
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*head=NULL;
        ListNode*last;
        
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        
        for(int i=0;i<lists.size();i++)
        {  if(lists[i]!=NULL) 
            pq.push(lists[i]);
        }
        while(!pq.empty())
        {
            ListNode*top=pq.top();
            pq.pop();
            if(top->next!=NULL)
            {
                pq.push(top->next);
            }
            if(head==NULL)
            {
                head=top;
                last=top;
            }
            else{
               last->next=top;
               last=top; 
            }
        }
        return head;
    }
};
