/*
Check If Circular Linked List
link:https://practice.geeksforgeeks.org/problems/circular-linked-list/1#

Given a singly linked list, find if the linked list is circular or not. 
A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.

Example 1:

Input:
LinkedList: 1->2->3->4->5
(the first and last node is connected,
i.e. 5 --> 1)
Output: 1
*/

bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL || head->next==NULL)
   return false;
   
   Node*curr=head;
   
   while(curr!=NULL)
   {
       if(head==curr->next)
       return true;
    curr=curr->next;
   }
   
   return false;
}
