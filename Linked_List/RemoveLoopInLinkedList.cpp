/*
Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present. 
*/

 void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node* slow = head;
        Node* fast = head;
        
        int flag=0;
        while(fast->next!=NULL && fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            Node* fast=head;
            while(fast->next!=slow->next)
            {
               slow=slow->next;
               fast=fast->next;
            }
            slow->next=NULL;
        }
       
    }
