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

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
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
    

    
    tail->next = newnode;
    tail = tail->next;

}



void delete_at_any_pos(Node* temp, Node* &tail, int pos)
{
    if(temp == NULL)
        return;
    
    for(int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_lnkdList(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        long long v;
        cin >> x >> v;


        if(x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if(x == 1)
        {
            insert_at_tail_optimized(head, v, tail);
        }
        
        else if (x == 2)
        {
            delete_at_any_pos(head, v);
        }
        
        print_lnkdList(head);
        cout << "\n";
    }
    return 0;
}