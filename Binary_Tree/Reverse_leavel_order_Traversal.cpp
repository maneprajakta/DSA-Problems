vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*>q;
    stack<int>s;
    vector<int>v;
    q.push(root);
    while(!q.empty())
    {
        Node*temp = q.front();
        q.pop();
        s.push(temp->data);
        
        if(temp->right)q.push(temp->right);
        if(temp->left)q.push(temp->left);
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    return v;
}
