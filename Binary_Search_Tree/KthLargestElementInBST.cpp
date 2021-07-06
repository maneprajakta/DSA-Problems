/*
Given a Binary search tree. 
Your task is to complete the function which will return the Kth largest element without doing any modification in Binary Search Tree.


Example 1:

Input:
      4
    /   \
   2     9
k = 2 
Output: 4

*/

class Solution
{
    public:
   void revInOrder(Node *root, int k, int &index, int &res)
{
    if(root != NULL)
    {
        revInOrder(root->right, k, index, res);
        
        if(index == k)
        {
            res = root->data;
        }
        index++;
        
        revInOrder(root->left, k, index, res);
    }
}


int kthLargest(Node *root, int K)
{
    int index = 1;
    int res = -1;
    
    revInOrder(root, K, index, res);
    
    return res;
}
};
