#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
//insert at head
void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        
    }
}
int main(){
    int n;
    cin >> n;
    node* node1 = new node(n);
    node* head = node1;

 return 0;
}