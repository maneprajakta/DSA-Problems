/* 

link :https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

Given a linked list of N nodes. The task is to reverse this list.

Example 1:

Input:
LinkedList: 1->2->3->4->5->6
Output: 6 5 4 3 2 1
Explanation: After reversing the list, 
elements are 6->5->4->3->2->1.

*/

struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node*curr = head;
    Node*next = NULL;
    Node*prev = NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    head = prev;
    return head;
}

// recursive 

struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    if(head==NULL || head->next==NULL)
    return head;
    
    Node*rest = reverseList(head->next);
    head->next->next = head;
    head->next=NULL;
    
    return rest;
}
