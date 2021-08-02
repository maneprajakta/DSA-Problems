/*
Link:https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/

Delete Node in a Linked List
Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, 
instead you will be given access to the node to be deleted directly.

It is guaranteed that the node to be deleted is not a tail node in the list.
*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};
