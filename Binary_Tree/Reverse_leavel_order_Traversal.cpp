/*
Link:https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#
Reverse Level Order Traversal 
Easy Accuracy: 47.34% Submissions: 51052 Points: 2
Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

Example 1:

Input :
        1
      /   \
     3     2

Output: 3 2 1
Explanation:
Traversing level 1 : 3 2
Traversing level 0 : 1
*/

vector<int> reverseLevelOrder(Node *node)
{
    // code here
    queue<Node*>q;
    vector<int>v;
    
    if(node!=NULL)
    {
        q.push(node);
        while(!q.empty())
        {  Node*temp=q.front();
           q.pop();
           v.push_back(temp->data);
           if(temp->right!=NULL)q.push(temp->right);
           if(temp->left!=NULL)q.push(temp->left);
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
