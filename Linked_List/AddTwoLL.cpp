/*
link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#
Add two numbers represented by linked lists 

Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.
The sum list is a linked list representation of the addition of two input numbers.

Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).

*/

  struct Node* reverse(struct Node*node)
    {
        if(node==NULL || node->next==NULL)
        return node;
        
        struct Node*next=NULL;
        struct Node*prev=NULL;
        struct Node*curr=node;
        
        while(curr)
        {
            next = curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        
        }
        node=prev;
        return node;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        first = reverse(first);
        second = reverse(second);
        
        Node*res=NULL;
        Node *temp, *prev = NULL;
        int carry=0,sum;
        
        while(first||second)
        {
            sum = carry +(first?first->data:0)+(second?second->data:0);
            carry = (sum>=10)?1:0;
            sum=sum%10;
            temp = new Node(sum);
            if(res==NULL)
            res=temp;
            else
            prev->next=temp;
            
            prev=temp;
            
            if (first)
            first = first->next;
            if (second)
            second = second->next;
        }
        
        if(carry>0)
        temp->next=new Node(carry);
           
        return reverse(res);
    }
