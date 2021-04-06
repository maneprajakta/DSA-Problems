/*
link:https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

Example 1:

Input:
LinkedList: 2->2->4->5
Output: 2 4 5
Explanation: In the given linked list 
2 ->2 -> 4-> 5, only 2 occurs more 
than 1 time.

*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if (head == NULL || head->next == NULL)
        return NULL;
        
        ListNode *first = head;
        ListNode *second=head;
        
        while(first && second && second->next)
        {
            first=first->next;
            second=second->next->next;
            if(first==second)
                break;
        }
        if(first!=second)
            return NULL;
        
        first=head;
        while(first!=second)
        {
            first=first->next;
            second=second->next;
        }
        return first;
        
    }
};
