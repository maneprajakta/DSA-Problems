void printleft(Node*root,vector<int>&v)
{ 
    if(root==NULL)
    return;
    if(root->left)
    {
        v.push_back(root->data);
        printleft(root->left,v);
    }
    else{
        if(root->right)
        {
            v.push_back(root->data);
            printleft(root->right,v);
        }
    }
}

void printleaves(Node*root,vector<int>&v)
{
    if(root==NULL)
    return;
    
    printleaves(root->left,v);
    
    if(!root->left && !root->right)
    v.push_back(root->data);
    
    printleaves(root->right,v);
}

void printright(Node*root,vector<int>&v)
{
    if(root==NULL)
    return;
    
    if(root->right)
    {   printright(root->right,v);
        v.push_back(root->data);
    }
    else{
        if(root->left)
        {   printright(root->left,v);
            v.push_back(root->data);
        }
    }
    
}


vector <int> printBoundary(Node *root)
{    vector<int>v;
     //Your code here
     if(root==NULL)
     return v;
     
     v.push_back(root->data);
     printleft(root->left,v);
     printleaves(root->left,v);
     printleaves(root->right,v);
     printright(root->right,v);
     
     return v;
}
