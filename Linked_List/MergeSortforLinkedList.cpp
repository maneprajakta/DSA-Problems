/*
link:https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1#

Merge Sort for Linked List 
Medium Accuracy: 52.29% Submissions: 21234 Points: 4
Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

Example 1:

Input:
N = 5
value[]  = {3,5,2,4,1}
Output: 1 2 3 4 5
Explanation: After sorting the given
linked list, the resultant matrix
will be 1->2->3->4->5.

*/


 Node*merge(Node*l1,Node*l2)
    {
        if(!l1)
        return l2;
        if(!l2)
        return l1;
        
        if(l1->data<l2->data)
        {
            l1->next=merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next=merge(l1,l2->next);
            return l2;
        }
    }
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL)
        return head;
        
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        Node* newHead=slow->next;
        slow->next=NULL;
        
        return merge(mergeSort(head), mergeSort(newHead));
    }
