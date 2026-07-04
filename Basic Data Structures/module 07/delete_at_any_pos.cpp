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

void insert_at_tail_optimized(Node* &head, int val, Node* &tail)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
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

void delete_at_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_any_pos(Node* temp, int pos)
{
    for(int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}


void delete_at_any_tail(Node* temp, Node* &tail, int pos)
{
    for(int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
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

void print_reverse(Node* temp)
{
    if(temp == NULL)
        return;
    print_reverse(temp->next);
    cout << temp->val << endl;
    
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(1)
    {
        int val;
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail_optimized(head, val, tail);
    }

    delete_at_any_tail(head, tail, 2);
    print_lnkdList(head);
    return 0;
}

