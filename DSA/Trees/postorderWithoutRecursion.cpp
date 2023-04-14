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
vector<int> postorder(node* root){
    stack<node*>st;
    vector<int>postorder;
    if(root == NULL)
        return postorder;

    st.push(root);
    while(!st.empty()){
        if(root -> right != NULL){
            st.push(root->right);
        }
      
            if(root -> left != NULL)
                st.push(root -> left);
            
            else{
                root = st.top();
                st.pop();
                postorder.push_back(root->data);
            }
    }
    return postorder;
}
int main(){
    node* root = NULL;
    root = buildTree(root);
    vector<int> ans;
    ans = postorder(root);
    cout << endl;
    for(auto i: ans)
        cout << i << " ";
 return 0;
}