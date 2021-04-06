/*
link:https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

Example 1:

Input:
N = 3
value[] = {1,3,4}
x = 2
Output: True
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.

*/

bool detectLoop(Node* head)
    {
        // your code here
        Node*second=head;
        Node*first=head;
        while(first && second && second->next)
        {
            first=first->next;
            second=second->next->next;
            
            if(first==second)
            return true;
        }
        return false;
    }
