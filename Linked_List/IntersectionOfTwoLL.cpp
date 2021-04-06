/*
link:https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1#
Given two lists sorted in increasing order, create a new list representing the intersection of the two lists. 
The new list should be made with its own memory — the original lists should not be changed.

Example 1:

Input:
L1 = 1->2->3->4->6
L2 = 2->4->6->8
Output: 2 4 6
Explanation: For the given first two
linked list, 2, 4 and 6 are the elements
in the intersection.

*/


Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node*rest=NULL;
    Node*prev;
    Node*curr1 = head1;
    Node*curr2 = head2;
    
    
    while(curr1 && curr2)
    {
        if(curr1->data<curr2->data)
        {
           curr1=curr1->next;
        }
        else if(curr1->data>curr2->data)
        {
             curr2=curr2->next;
        }
        else{
            if(curr1->data==curr2->data)
            {
                if(rest==NULL)
                {
                    rest = new Node(curr1->data);
                    prev=rest;
                }
                else{
                    Node*p = new Node(curr1->data);
                    prev->next=p;
                    prev=p;
                }
                curr1=curr1->next;
                curr2=curr2->next;   
            }
        }
    }
   
   return rest; 
}
