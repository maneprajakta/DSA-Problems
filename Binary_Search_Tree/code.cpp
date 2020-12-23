#include<bits/stdc++.h>
using namespace std;

//finding minimum element
int minValue(Node* root)
{  
    if(root==NULL)
      return -1;
    return (!root->left)?root->data:minValue(root->left);
}

//finding sum of leaf nodes
int sumOfLeafNodes(Node *r ){
     /*Your code here */
      if(r==NULL)
       return 0;
      if((r->left==NULL && r->right==NULL))
       return r->data;
       return sumOfLeafNodes(r->left)+sumOfLeafNodes(r->right);   
}

//search an element in bst
bool search(Node* root, int x)
{
    if(root==NULL)
    return false;
    else{
        if(root->data==x)
         return true;
    else{
        if(root->data<x)
        search(root->right,x);
        else if(root->data>x)
         search(root->left,x);
        else
        return false;
       }
    }
}


int main()
{
}
