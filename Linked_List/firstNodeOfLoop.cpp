/*
link : https://leetcode.com/problems/linked-list-cycle-ii/

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.
Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.

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
