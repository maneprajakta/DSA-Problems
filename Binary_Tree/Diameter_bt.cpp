/*
Link:https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
Diameter of Binary Tree 
Easy Accuracy: 50.01% Submissions: 100k+ Points: 2
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree.
The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded 
(note that there is more than one path in each tree of length nine, but no path longer than nine nodes).


    Two conditions:
     If diameter goes through root node the dia=1+lh+rh;
     else dl+dr;

*/

int height(Node*root)
{
    if(!root)
      return 0;
    return (1+max(height(root->left),height(root->right)));
}

int diameter(Node* root) {
    // Your code here
    if(!root)
    return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    
    return (max((1+lh+rh),max(ld,rd)));
}
