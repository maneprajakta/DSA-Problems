/*
link:https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1#

Intersection Point in Y Shapped Linked Lists

Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

Example 1:

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15

*/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node*curr1 = head1;
    Node*curr2 = head2;
    int c1=0,c2=0;
    
    while(curr1!=NULL)
    {
        curr1=curr1->next;
        c1++;
    }
    while(curr2!=NULL)
    {
        curr2=curr2->next;
        c2++;
    }
    
    int d = abs(c1-c2);
    curr1 = head1;
    curr2 = head2;
    
    if(c1>c2)
    {
        while(d--)
        {
             curr1=curr1->next;
        }
    }
    if(c2>c1)
    {
        while(d--)
        {
             curr2=curr2->next;
        }
    }
    while(curr1 && curr2)
    {
        if(curr1->next==curr2->next)
       { return curr1->next->data;
       break;
       }
       curr1=curr1->next;
       curr2=curr2->next;
    }
    return -1;
    
}
