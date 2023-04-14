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
void lvlorder(node* root){
    if(root == NULL)
        return;
    
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << temp -> data <<" ";
        if(temp -> left)
            q.push(temp -> left);
        
        if(temp -> right)
            q.push(temp -> right);
    }
}

node* buildTree(node* root){
    int data;
    cout << " enter data: ";
    cin >> data;
    root = new node(data);
    if(data == -1)
        return NULL;
    cout << " for left " << data << " ";
    root -> left = buildTree(root ->left);
    cout << " for right " << data << " ";
    root->right = buildTree(root -> right);
    return root;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node* root = NULL;
    root = buildTree(root);

    // 5 1 6 -1 -1 4 -1 -1 3 -1 2 7 -1 -1 8 -1 -1
    cout << endl;
    lvlorder(root);
 return 0;
}