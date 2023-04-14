#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
    
};
node* buildTree(node* root){
    int data;
    cout <<"Enter Data : ";
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << " Enter data for left of " << data <<" ";
    root -> left = buildTree(root -> left);
    cout << "Enter data for right of " << data << " ";
    root -> right = buildTree(root -> right);
    return root;
}

void inorder(node* root){
    if(root == NULL)
        return;
    inorder(root -> left);
    cout << root -> data <<" ";
    inorder(root -> right);

}

void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main(){
    node* root = NULL;
    root = buildTree(root) ;
    cout << endl;
    //2 5 -1 -1 6 -1 -1 8 9 7 -1 -1 -1 10 -1 -1
    // inorder(root);
    // cout << endl;
    // preOrder(root);
    // cout << endl; 
    postOrder(root);
 return 0;
}

// 3 2 5 -1 -1 6 -1 -1 8 9 7 -1 -1 -1 10 -1 -1
