/*

Link:https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1#

Insert in a Sorted List 
Easy Accuracy: 43.83% Submissions: 34777 Points: 2
Given a sorted singly linked list and a data, your task is to insert the data in the linked list in a sorted way i.e. order of the list doesn't change.

Example 1:

Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output: 19 25 36 47 58 69 80

*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        
        struct Node* p = new Node(data);
        
        if(head==NULL)
        return p;
        
        if(head->data>data)
        {
            p->next=head;
            head=p;
        }
        else{
            
            Node* prev=head;
            Node* temp=head->next;
            while(temp!=NULL)
            {
                if(prev->data<=data && temp->data>data)
                {
                    break;
                }
                prev=prev->next;
                temp=temp->next;
            }
            prev->next=p;
            p->next=temp;
        }
        
     return head;   
    }
};
