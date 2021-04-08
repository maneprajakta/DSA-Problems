/*
 Middle of the Linked List
 link:https://leetcode.com/problems/middle-of-the-linked-list/
 
 Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:

Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.

*/

ListNode* middleNode(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;    
    }
