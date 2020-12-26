

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
