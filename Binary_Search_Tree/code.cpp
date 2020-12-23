#include<bits/stdc++.h>
using namespace std;



//finding minmum element

int minValue(Node* root)
{  
    if(root==NULL)
      return -1;
    return (!root->left)?root->data:minValue(root->left);
}

int main()
{
}
