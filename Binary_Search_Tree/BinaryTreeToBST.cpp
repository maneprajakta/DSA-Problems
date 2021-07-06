/*
Link : https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1#
Given a Binary Tree, convert it to Binary Search Tree in such a way that keeps the original structure of Binary Tree intact.
 

Example 1:

Input:
      1
    /   \
   2     3
Output: 1 2 3

*/

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node*root,vector<int>&v)
    {
        if(root!=NULL)
        {
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
    }
    void create(Node*root,vector<int>v,int &i)
    {
        if(root!=NULL)
        {
            create(root->left,v,i);
            root->data=v[i];
            i++;
            create(root->right,v,i);   
        }
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        inorder(root,v);
        if(v.size()!=0)
        {
            sort(v.begin(),v.end());
        }
        int i=0;
        create(root,v,i);
        return root;
    }
};
