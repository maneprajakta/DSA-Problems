/*
link:https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/
Move last element to front of a given Linked List
Write a function that moves the last element to the front in a given Singly Linked List. 
For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.
*/

void moveToFront(Node *head)
{
   if(head==NULL || head->next==NULL)
   return head;
   
   Node*sec_last=NULL;
   Node*last=head;
   
   while(last->next!=NULL)
   {
     sec_last=last;
     last=last->next;
   }
   sec_last->next=NULL;
   last->next=head;
   head=last;
   
   return head;
} 
