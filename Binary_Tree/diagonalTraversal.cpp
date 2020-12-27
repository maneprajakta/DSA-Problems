void create_map(Node*root,int dist,map<int,vector<int>>&mp)
{
    if(!root)
    return ;
    mp[dist].push_back(root->data);
    create_map(root->left,dist+1,mp);
    create_map(root->right,dist,mp);
}

vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>p;
   map<int,vector<int>>mp;
   create_map(root,0,mp);
   for(auto x:mp)
   {
       for(auto j:x.second)
       p.push_back(j);
   }
   return p;
}
