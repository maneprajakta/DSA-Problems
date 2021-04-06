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

// iterative 

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

//reverse linled list in group of size

struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node* curr=head;
    node* next=NULL;
    node* prev=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL) 
    head->next = reverse(next,k);
    
    return prev;
}


//detect loop

bool detectLoop(Node* head)
{
    // your code here
    
    Node*first = head;
    Node*second = head;
    while(first && second && second->next)
    {
          first=first->next;
          second=second->next->next;
          if(first==second)
          {
              return true;
          }
    }
    return false;
}

// Remove lopp in Linked list

void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
     Node*curr=head;
     Node*sec=head;
     while(curr && sec && sec->next)
     {  
        sec=sec->next->next;
        curr=curr->next;
         if(curr==sec)
         {break;}
     }
     if(sec==curr)
     {
     sec=head;
     while(sec->next!=curr->next)
     {
         sec=sec->next;
         curr=curr->next;
     }
     curr->next=NULL;
     }
}

// Remove duplicate element from sorted Linked List

Node *removeDuplicates(Node *root)
{
 // your code goes here'
   if(root==NULL || root->next==NULL)
   {
       return root;
   }
   
   Node*curr = root;
   
   while(curr->next!=NULL)
   {
      if(curr->data == curr->next->data)  
      {
          curr->next = curr->next->next;
      }
      else{
      curr=curr->next;
      }
   }
   return root;
   
}


//Remove duplicates from an unsorted linked list 

Node * removeDuplicates( Node *head) 
{
 // your code goes here
  set<int>mp;
  Node* curr = head;
  mp.insert(curr->data);
  
  while(curr->next)
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
