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

void delete_at_any_pos(Node* &head, Node* &tail, int pos)
{
    if(head == NULL)
        return;
    
    if(pos == 0)
    {
        Node* deletehead = head;
        head = head->next;
        if(head == NULL)
            tail = NULL;
        delete deletehead;
        return;
    }
    Node* temp = head;
    for(int i = 0; i < pos-1; i++)
    {
        if(temp == NULL || temp->next == NULL)
            return;
        
        temp = temp->next;
    }
    if(temp->next== NULL)
        return;
    
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    
    if(deleteNode ==tail)
        tail = temp;
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
    vector<int> v(1005, 0);
    Node* head = NULL;
    Node* tail = NULL;

    while(1)
    {
        int val;
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail_optimized(head, val, tail);

        v[val]++;

    }

    Node *cur= head;
    while (cur!=NULL)
    {
        Node *temp = cur;
        while (temp->next !=NULL)
        {
            if (temp->next->val == cur->val)
            {
                Node *del = temp->next;
                temp->next = temp->next->next;

                if (del == tail)
                    tail = temp;
                delete del;
            }
            else
                temp = temp->next;
        }
        cur = cur->next;
    }
    print_lnkdList(head);
    return 0;
}