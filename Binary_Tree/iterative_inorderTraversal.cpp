vector<int> inOrder(Node* root)
{
  // Your code here
  stack<Node*>s;
  vector<int>v;
  if(!root)
  return v;
  Node * curr = root;
  while(!s.empty() || curr!=NULL)
  {
      if(curr)
      {   s.push(curr);
          curr=curr->left;
      }
      else{
          curr=s.top();
          s.pop();
          v.push_back(curr->data);
          curr=curr->right;
      }
  }
  return v;
}
