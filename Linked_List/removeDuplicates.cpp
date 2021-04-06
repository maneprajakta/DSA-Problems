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

Node *removeDuplicates(Node *head)
{
 // your code goes here
   if(head==NULL || head->next==NULL)
   return head;
   
   Node*curr = head;
   
   while(curr->next!=NULL)
   {
       if(curr->data == curr->next->data)
       curr->next=curr->next->next;
       else
       curr=curr->next;
   }
   return head;
}
