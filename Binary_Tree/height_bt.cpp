/*
Link:https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#
Height of Binary Tree 
Medium Accuracy: 65.76% Submissions: 100k+ Points: 4
Given a binary tree, find its height.


Example 1:

Input:
     1
    /  \
   2    3
Output: 2

*/
int height(struct Node* node){
        // code here
        if(!node)
        return 0;
        return 1+max(height(node->left),height(node->right));
    }
