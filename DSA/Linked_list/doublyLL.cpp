#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int data){
            this -> data = data;
            this -> prev = NULL;
            this -> next = NULL;
        }
};
void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp; 
}
void insertAtPos(Node* &head, Node* &tail, int d, int pos){
    Node* temp = head;
    int count = 1;
    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }
    //create a new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next ->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert ->prev = temp;
}

void del(int pos, Node* &head,  Node* &tail){
    if(pos == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp ->next = NULL;
    }
    else{
        Node* cur = head;
        Node* prev = NULL;
        int count = 1;
        while(count < pos){
            prev = cur;
            cur = cur -> next;
            count++;
        }
        cur -> prev = NULL;
        prev -> next = cur -> next;
        cur -> next = NULL;
        
        if(prev -> next == NULL)
            tail = prev;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    print(head);

    insertAtHead(head, tail, 5);
    print(head);

    insertAtTail(head, tail, 20);
    print(head);
    insertAtPos(head, tail, 15, 3);
    print(head);

    del(4,head,tail);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    return 0;
}