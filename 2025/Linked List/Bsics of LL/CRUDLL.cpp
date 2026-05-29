#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()
    {
        cout << this->data << " Deleted from LL.." << endl;
    }
};
void Display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtbegin(Node *&head, int data)
{
    Node *nodeToinsert = new Node(data);
    nodeToinsert->next = head;
    head = nodeToinsert;
}
void insertAttail(Node *&tail, int data)
{
    Node *nodeToinsert = new Node(data);
    tail->next = nodeToinsert;
    tail = nodeToinsert;
}
void insertAtpos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtbegin(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt != pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAttail(tail, data);
        return;
    }
    Node *nodeToinsert = new Node(data);

    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deleteAtbegin(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}
void deleteAtpos(int pos, Node *&head)
{
    if (pos == 1)
    {
        deleteAtbegin(head);
        return;
    }
    Node *curr = head;
    Node *prev;
    int cnt = 1;
    while (cnt != pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    delete curr;
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    insertAtbegin(head, 20);
    insertAtbegin(head, 30);
    insertAtbegin(head, 40);
    insertAtbegin(head, 60);
    Display(head);
    insertAtpos(head, tail, 2, 50);
    insertAtbegin(head, 70);
    insertAtpos(head, tail, 1, 80);
    insertAtpos(head, tail, 9, 0);
    Display(head);
    deleteAtpos(9, head);
    Display(head);
    deleteAtpos(1, head);
    Display(head);

    return 0;
}