/*
https://www.geeksforgeeks.org/create-a-mirror-tree-from-the-given-binary-tree/     
*/
void mirror(Node* node) 
{
     // Your Code Here
     if(!node) return;
     mirror(node->left);
     mirror(node->right);
     swap(node->left,node->right);
}
