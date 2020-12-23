void inorder(Node*root ,vector<Node*>& v)
{
    if(root==NULL)
       return;
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}

Node* bst(vector<Node*>&v,int start,int end)
{
    if(start>end)
      return NULL;
    int mid = (start+end)/2;
    Node*temp = v[mid];
    temp->left = bst(v,start,mid-1);
    temp->right = bst(v,mid+1,end);
    return temp;
}


Node* buildBalancedTree(Node* root)
{
    vector<Node*>v;
    inorder(root,v);
    
    
    return bst(v,0,v.size()-1);
	// Code here
}
