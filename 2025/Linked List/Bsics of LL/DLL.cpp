#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
    ~Node(){
        cout<<this->data<<" Deleted from list"<<endl;
    }
};
void insertAthead(Node *&head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAttail(Node *&tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtpos(Node *&head, Node *&tail, int pos, int data){
    if(pos == 1){
        insertAthead(head, data);
        return;
    }
    Node *node = new Node(data);
    Node *temp = head;
    int cnt = 1;
    while(cnt != pos-1){
        temp = temp->next;
        cnt++; 
    }
    if(temp->next == NULL){
        insertAttail(tail, data);
        return;
    }
    node->next = temp->next;
    temp->next->prev = node;
    temp->next = node;
    node->prev = temp;
}
void DeleteNode(Node *&head, Node *&tail, int pos){
    if(pos == 1){
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }else{
        Node *curr = head;
        Node *prv;
        int cnt = 1;
        while (cnt != pos)
        {
            prv = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next != NULL)curr->next->prev = prv;
        prv->next = curr->next;
        curr->prev = NULL;
        delete curr;
    }
}
void Display(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertAthead(head,20);
    insertAthead(head,30);
    insertAttail(tail,5);
    insertAtpos(head, tail, 3, 15);
    Display(head);
    DeleteNode(head,tail,5);
    Display(head);
}