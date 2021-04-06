/*
link:https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1#

Remove duplicates from an unsorted linked list
Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. 
When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.

Example 1:

Input:
N = 4
value[] = {5,2,2,4}
Output: 5 2 4
Explanation:Given linked list elements are
5->2->2->4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5->2->4


*/

Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     set<int>mp;
     Node*curr = head;
     mp.insert(head->data);
     while(curr->next!= NULL)
     {
        if(mp.find(curr->next->data)!=mp.end())
        {
            curr->next=curr->next->next;
        }
        else{
            
            curr=curr->next;
            mp.insert(curr->data);
        }
     }
     return head;
    }
