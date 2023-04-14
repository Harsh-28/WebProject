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
    cout << "Enter Data :" ;
    cin >> data;

    root = new node(data);
    if(data == -1)
        return NULL;
    
    cout << " For Left of "<<data <<" :";
    root -> left = buildTree(root -> left);
    cout << " for right of "<< data <<" :";
    root -> right = buildTree(root -> right);
    return root;
}

void inorderWithoutRecursion(node* root){
    stack<node*> st;
    vector<int> inorder;
    node* curr = root;
    while(true){
        if(curr != NULL){
            st.push(curr);
            curr = curr -> left;
        }
        else{
            if(st.empty() == true)
                break;
            
            curr = st.top();
            st.pop();

            inorder.push_back(curr -> data);
            curr = curr -> right;
        }
    }
    for(auto i: inorder)
        cout << i <<" ";
}
int main(){
        node * root = NULL;
        root = buildTree(root);

        inorderWithoutRecursion(root);
 return 0;
}