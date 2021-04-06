/*
link:https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#
Add 1 to a number represented as linked list
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Example 1:

Input:
LinkedList: 4->5->6
Output: 457 
*/
Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
       Node*last=NULL;
       Node*curr=head;
       
       while(curr->next!=NULL)
       {
           if(curr->data!=9){
           last=curr;}
           curr=curr->next;
       }
       
       //if last element is not 9
       if(curr->data!=9)
       {curr->data++;
       return head;}
       
       //if all no are 9
       if(last==NULL)
       {
           last = new Node(0);
           last->next=head;
           head=last;
       }
       
       //if 199
       last->data++;
       last=last->next;
       while(last!=NULL)
       {
           last->data=0;
           last=last->next;
       }
       return head;
    }
