void create_map(Node*root,int dist,int level,map<int,pair<int,int>>&mp)
{
    if(root)
    {
        if(mp.find(dist)==mp.end() || level>=mp[dist].second)
        {
            mp[dist]={root->data,level};
        }
        create_map(root->left,dist-1,level+1,mp);
        create_map(root->right,dist+1,level+1,mp);
    }
}
vector <int> bottomView(Node *root)
{
   // Your Code Here
    vector<int>v;
   if(root)
   {
      
       map<int,pair<int,int>>mp;
       create_map(root,0,0,mp);
       for(auto x:mp)
       {
           v.push_back(x.second.first);
       }
   }
   return v;
}
