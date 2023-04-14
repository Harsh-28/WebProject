#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    int data;
    cout << "Enter Data : ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << " Enter data for left of " << data << " ";
    root->left = buildTree(root->left);
    cout << "Enter data for right of " << data << " ";
    root->right = buildTree(root->right);
    return root;
}

 int getSize(node* root){
    if(root == NULL)
         return 0;
    
     return getSize(root -> left) + getSize(root -> right) + 1;
} 
int getMax(node* root){
    if(root == NULL)
        return -1;
    
    return max(root -> data,max(getMax(root-> left), getMax(root -> right)));
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    node *root = NULL;
    root = buildTree(root);
    // cout << getSize(root);
    cout << getMax(root);
    return 0;
}