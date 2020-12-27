vector<int> rightView(Node *root)
{
   // Your Code here
   
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
           Node*curr = q.front();
           q.pop();
          if(i==n)
         {  v.push_back(curr->data);
         }
         if(curr->left) q.push(curr->left);
         if(curr->right) q.push(curr->right);
        }
    }
return v;
}
