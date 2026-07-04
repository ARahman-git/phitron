#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;

    };
};

void insert_at_head(Node* &head, int val)
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;      
}

void insert_at_tail_optimized(Node* head, int val, Node* &tail)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        return;
    }
    
    // Node* temp = head;
    // while(temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // temp->next = newnode;
    
    tail->next = newnode;
    tail = tail->next;

}

void print_lnkdList(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);
    

    head->next = a;
    a->next = b;
    b->next = tail;

    insert_at_head(head, 100);
    insert_at_head(head, 100);
    insert_at_head(head, 100);
    insert_at_tail_optimized(head, 200, tail);
    print_lnkdList(head);
    return 0;
}

