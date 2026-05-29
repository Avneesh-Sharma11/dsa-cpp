#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
void traverse(Node *head)
{
    // Node* temp = head;
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    Node *head = new Node();
    Node *Second = new Node();
    Node *Third = new Node();

    head->data = 10;
    Second->data = 20;
    Third->data = 30;

    head->next = Second;
    Second->next = Third;
    Third->next = NULL;
    cout << "Linked List :" << endl;
    traverse(head);
    return 0;
}