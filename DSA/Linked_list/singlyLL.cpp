#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
};

void insertAtHead(Node* &head, int d){
       Node *temp = new Node(d);
       temp -> next = head;
       head = temp;
}
void insertAtEnd(Node* &tail, int d){
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp; // tail = tail -> next;  
}
void insertAtPosition(Node *&head, Node* &tail, int d, int pos)
{
    //At pos1
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < pos - 1){
        temp = temp -> next;
        count ++;
    }
    if(temp -> next == NULL){
        insertAtEnd(tail,d);
        return;
    }

    //create a new node
    Node *NodeToInsert = new Node(d);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;
}

void delAtHead(Node* &head){
    Node* temp = head;
    head = temp -> next;

}
void print(Node* &head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data <<" " << temp -> next;
        cout << endl;
        temp = temp -> next;
    }
}
int main(){
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    Node* head = node1;
    Node* tail = node1;
    insertAtEnd(tail,12);
    insertAtEnd(tail,2);
    insertAtEnd(tail, 5);

    insertAtPosition(head,tail, 4,1);
    insertAtPosition(head,tail,129, 6);
    print(head);
    cout << endl;
    // cout << "Head" << head -> data <<  endl;
    // cout << "Tail" << tail->data << endl;
    delAtHead(head);
    print(head);
    cout << "Head" << head->data << endl;
    // cout << "Tail" << tail->data << endl;

    return 0;
}