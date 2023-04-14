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
    cout << "Enter data " ;
    cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;

    cout << "for left node of "<< data <<" ";
    root -> left = buildTree(root -> left);
    cout << "for right node of " << data <<" ";
    root->right = buildTree(root->right);
    return root;
}

vector<int> preorder(node* root){
    stack<node*>st;
    vector<int>preorder;
    node* curr = root;
    if(root == NULL)
        return preorder;
    st.push(curr);
    while(!st.empty()){
        curr = st.top();
        st.pop();
        preorder.push_back(curr -> data);
        if(curr -> right != NULL)
            st.push(curr -> right);
        if(curr -> left != NULL)
            st.push(curr -> left);
    }
    return preorder;
}
int main(){
    node* root = NULL;
    root = buildTree(root);
    // cout << endl << "TREE CREATED!!!";

    vector<int> ans;
    ans = preorder(root);
    for(auto i: ans)
        cout << i <<" ";
 return 0;
}

// 
 
 