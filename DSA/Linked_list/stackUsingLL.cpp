#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int data){
            this -> data;
            this -> next = NULL;
        }
};
void Push(node* &head, node* &tail, int data){
    
        if (tail == NULL)
        {
            node *temp = new node(data);
            head = temp;
            tail = temp;
        }
        node *temp = new node(data);
        tail->next = temp;
        tail = temp;
}

void print(node* head){
    
    while(head -> next == NULL){
        cout << head ->data <<" ";
        head = head -> next;
    }    
}
int main(){
    int n ;
    // node* Node = new node(1);
    node* head = NULL;
    node* tail = NULL;
    
    Push(head,tail,1);
    Push(head, tail, 2);
    Push(head, tail, 3);
    Push(head, tail, 4);

    print(head);
    return 0;
}