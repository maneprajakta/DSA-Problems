vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
   
   if(!root)
   return v;
   
   queue<Node*>q;
   q.push(root);
   while(!q.empty())
   {
       int n = q.size();
       for(int i=1;i<=n;i++)
       {
           Node*temp = q.front();
           q.pop();
           if(i==1)
           {
               v.push_back(temp->data);
           }
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
           
       }
   }
   return v;
}
