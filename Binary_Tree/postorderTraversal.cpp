vector <int> postOrder(Node* root)
{
  stack<Node*>s;
  stack<int>p;
  vector<int>v;
  s.push(root);
  while(!s.empty())
  {
      Node*curr= s.top();
      s.pop();
      p.push(curr->data);
      
      if(curr->left)
      s.push(curr->left);
      
      if(curr->right)
      s.push(curr->right);
  } 
  
  while(!p.empty())
  {  
     
      v.push_back(p.top());
      p.pop();
  }
  
  return v;
}
