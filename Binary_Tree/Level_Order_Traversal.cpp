/*
Link:https://practice.geeksforgeeks.org/problems/level-order-traversal/1#

Level order traversal 
Easy Accuracy: 49.61% Submissions: 79986 Points: 2
Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

*/

vector<int> levelOrder(Node* node)
{
   queue<Node*>q;
   vector<int>v;
   
   if(!node)
   return v;
   
   q.push(node);
   while(!q.empty())
   {
       Node *temp=q.front();
       q.pop();
       v.push_back(temp->data);
       if(temp->left)
       q.push(temp->left);
       if(temp->right)
       q.push(temp->right);
   }
   return v;
}
