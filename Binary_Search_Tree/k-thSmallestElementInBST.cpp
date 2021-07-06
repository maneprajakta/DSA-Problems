/*
Link:https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1#
k-th smallest element in BST 
Medium Accuracy: 49.44% Submissions: 40256 Points: 4
Given a BST and an integer K. Find the Kth Smallest element in the BST. 

Example 1:

Input:
      2
    /   \
   1     3
K = 2
Output: 2

*/

class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    int inorder(Node *root,int K,int &count,int &res )
    {
        if(root!=NULL)
        {
            inorder(root->left,K,count,res);
            if(K==count)
            res = root->data;
            count++;
            inorder(root->right,K,count,res);
        }
    }
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        int count=1;
        int res=-1;
        inorder(root,K,count,res);
        return res;
    }
};
