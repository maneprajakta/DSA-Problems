vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int>o;
	if(root)
	{
	    queue<Node*>q;
	    q.push(root);
	    int p=-1;
	    while(!q.empty())
	    {
	       int n = q.size();
	       vector<int>v;
	       for(int i=1;i<=n;i++)
	       {
	           Node*temp = q.front();
	           q.pop();
	           v.push_back(temp->data);
	           if(i==n)
	           p++;
	           if(temp->left)q.push(temp->left);
	           if(temp->right)q.push(temp->right);
	       }
	       if(p%2==0)
	       {
	           for(auto x:v)
	           {
	            o.push_back(x);   
	           }
	       }
	       else{
	           reverse(v.begin(),v.end());
	            for(auto x:v)
	           {
	            o.push_back(x);   
	           }
	       }
	    }
	}
	return o;
}
