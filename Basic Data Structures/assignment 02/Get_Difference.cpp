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
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int val;
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail_optimized(head, val, tail);
    }

    long long max = INT_MIN, min = INT_MAX;
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->val > max)
            max = temp->val;
        if(temp->val < min)
            min = temp->val;
        temp = temp->next;
    }

    cout << (max - min);
    return 0;
}