#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    long long val;
    Node* next;
    Node(long long val)
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
int main()
{
    int n1 = 0, n2 = 0;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail_optimized(head, val, tail);
        n1++;
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail_optimized(head2, val, tail2);
        n2++;
    }

    if(n1 != n2)
    {
        cout << "NO";
    }
    else
    {
        int flag = 0;
        Node *temp1 = head;
        Node *temp2 = head2;
        while (temp1 != NULL)
        {
            if(temp1->val != temp2->val)
            {
                flag = 1;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(flag == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}