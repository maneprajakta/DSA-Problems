int minValue(Node* root)
{
    // Code here
    return root->left!=NULL?minValue(root->left):root->data;
}

int maxValue(Node* root)
{
    // Code here
    return root->right!=NULL?maxValue(root->right):root->data;
}
