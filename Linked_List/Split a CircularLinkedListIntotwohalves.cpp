/*
Split a Circular Linked List into two halves
Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, 
first list should have one node more than the second list. The resultant lists should also be circular lists and not linear lists.

 

Example 1:

Input:
Circular LinkedList: 1->5->7
Output:
1 5
7


*/

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
  
    Node*slow=head;
    Node*fast=head;
    
    while(fast->next!=head && fast->next->next != head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    *head1_ref = head;
    
    //even length
    if(fast->next->next==head)
       fast = fast->next;
    if(head->next!=head)
       *head2_ref=slow->next;
    slow->next=head;
    fast->next=*head2_ref;
}
