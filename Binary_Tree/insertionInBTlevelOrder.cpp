#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node * right;
};

Node * create(int x)
{
    Node * node = new Node;
    node->data=x;
    node->left=node->right=NULL;
    return node;
}

void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}
Node * insert(int key,Node*root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();
        
        if(p->left!=NULL)
           q.push(p->left);
        else{
            p->left=create(key);
            return root;
        }
        if(p->right!=NULL)
           q.push(p->right);
        else{
            p->right=create(key);
            return root;
        }
        
    }
    
    
}

int main() {
	Node * root = create(10);
	root->left = create(20);
	insert(30,root);
	inorder(root);
	return 0;
}
