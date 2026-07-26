#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    } 
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail (Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_anyPos(Node* head, int idx, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void delete_at_head(Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        cout << "Null linked list";
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;

}

void delete_at_tail(Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        cout << "Null linked list";
        return;
    }

    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
    }
    tail->next = NULL;


}
void print_forword(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_backword(Node* tail)
{
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}
int main()
{
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = new Node(20);
    Node* a = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insert_at_head(head, tail, 10);
    insert_at_tail(head, tail, 50);
    insert_at_anyPos(head, 2, 100);
    

    print_forword(head);
    //print_backword(tail);

    delete_at_head(head, tail);
    delete_at_tail(head, tail);
    print_forword(head);
    return 0;
}