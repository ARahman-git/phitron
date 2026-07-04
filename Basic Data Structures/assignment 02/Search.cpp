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

    int t;
    cin >> t;
    while (t--)
    {
        Node* head = NULL;
        Node* tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail_optimized(head, val, tail);
        }
        long long x, count = -1;
        cin >> x;
        int flag = 0;

        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            if(temp->val == x)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
        }

        if(flag == 0)
            cout << -1 << endl;
        else
            cout << count << endl; 
    }

    return 0;
}