/*
Link:https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
*/
void map_create(Node*root,int dist,int level,map<int,pair<int,int>>&mp)
{
    if(root)
    {
        if(mp.find(dist)==mp.end() || mp[dist].second>level)
        {
            mp[dist]={root->data,level};
        }
        map_create(root->left,dist-1,level+1,mp);
        map_create(root->right,dist+1,level+1,mp);
    }
}
void topView(struct Node *root)
{
    //Your
    
    map<int,pair<int,int>>mp;
    if(root)
    {
        map_create(root,0,0,mp);
        for(auto it:mp)
        {
            cout<<it.second.first<<" ";
        }
       // cout<<endl;
    }
}
