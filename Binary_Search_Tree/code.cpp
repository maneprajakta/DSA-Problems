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


//pre order to tree

Node* BST(Node* root,int x)
{
    if(root==NULL)
      root = newNode(x);
    else{
        if(root->data<x)
          root->right = BST(root->right,x);
        else
          root->left = BST(root->left,x);
    }
    return root;
}

Node* constructTree(int pre[], int size) {
    Node *root=NULL;
    for(int i=0;i<size;i++)
    {
        root = BST(root,pre[i]);
    }
    return root;
}
//same for post order just for loop in reverse order

//count node in a range in bst

void inorder(Node*root,int & x,int l,int h)
{
    if(!root)
    return ;
    inorder(root->left,x,l,h);
    if(root->data>=l && root->data<=h)
     x++;
    inorder(root->right,x,l,h);
}

int getCount(Node *root, int l, int h)
{
  // your code goes here
  int x =0;
  inorder(root,x,l,h);
  return x;
}

//unique bst (catlan number)
int uniquebst(int n)
{       int catlan[n+1];
        catlan[0]=1;
        catlan[1]=1;
        for(int i=2;i<=n;i++)
        {
            catlan[i]=0;
            for(int j=0;j<i;j++)
            {
                catlan[i]+=(catlan[j]*catlan[i-j-1]);
            }
        }
       return catlan[n];
}


int main()
{
}
