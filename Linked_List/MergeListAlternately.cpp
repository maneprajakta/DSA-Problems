/*
Link : https://practice.geeksforgeeks.org/problems/merge-list-alternatingly/1#

Given two linked lists, your task is to complete the function mergeList() which inserts nodes of second list into 
first list at alternate positions of first list.

Input:
First line of input contains number of testcases T. For each testcase there will be 4 lines.
First line consists of the length of the first linked list, next line contains elements of the linked list.
Third line contains length of another linked list and next line contains elements of the linked list.

Output:
For each test case first print space separated vales of the first linked list, then in the next line print space separated values of the second linked list.
*/

void mergeList(struct Node **p, struct Node **q)
{
     // Code here''
     
     struct Node * first = *p;
     struct Node * second = *q;
     
     struct Node *firstnext;
     struct Node *secondnext;
     
     while(first!=NULL && second!=NULL)
     {
        firstnext = first->next;
        first->next = second;
        first = firstnext;
        
        secondnext = second->next;
        second->next = first;
        second = secondnext;
         
     }
    
    *q=second; 
}
