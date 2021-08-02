/*

link ; https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/772/
Palindrome Linked List

Solution
Given the head of a singly linked list, return true if it is a palindrome.


Approach;
1.ffinddd midddle 
2.reverssse fffrom midelle
3.compaare two haallefffss


*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode*slow = head;
        ListNode*fast = head;
        
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode*curr = slow;
        ListNode*prev = NULL;
        ListNode*next = NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        fast=head;
        
        while(prev!=NULL)
        {
            if(fast->val != prev->val)
                return false;
            fast=fast->next;
            prev=prev->next;
        }
        return true;
    }
        
};
