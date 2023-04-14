#include <bits/stdc++.h>
using namespace std;
class Tree{
    public:
        int data;
        Tree* left;
        Tree* right;

        Tree(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Tree* buildTree(Tree* root){
    int data;
    cout <<"Enter data " ;
    cin >> data;
    root = new Tree(data);
    if(data == -1)
        return NULL;
    
    cout <<"for left of "<< data << " ";
    root -> left = buildTree(root -> left);
    cout << "for right of "<< data <<" ";
    root -> right = buildTree(root -> right);
    return root;
}


//====================================using DEPTH FIRST TRAVERSAL (RECURSIVE SOLUTION)==================================================//
int maxHeightByRecusion(Tree* root){
    if(root == NULL)
        return  0;
    int left = maxHeightByRecusion(root->left);
    int right = maxHeightByRecusion(root->right);
    return max(left,right)+1;
}



//======================================== using  LEVEL ORDER TRAVERSAL(IRTATIVE SOLUTION)==============================================//
int maxHeight(Tree* root){
    int depth = 0;
    queue<Tree*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Tree* temp = q.front();
        q.pop();
        if(temp == NULL)
            depth++;
        
        if(temp != NULL){
            if(temp -> left != NULL)
                q.push(temp -> left);
            
            if(temp -> right != NULL)
                q.push(temp -> right);
        }

        else if(!q.empty())
            q.push(NULL);
    }

return depth;

}
int main(){    
    Tree* root = NULL;
    root = buildTree(root);
    cout << endl;
    int height = maxHeightByRecusion(root);
    cout << height << endl;
    int h = maxHeight(root);
    cout << h;
    return 0;
}