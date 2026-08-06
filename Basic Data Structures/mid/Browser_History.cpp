#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node* next;
    Node* prev;
    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};



void insert_at_tail (Node* &head, Node* &tail, string val)
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











int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    string s; 
    while(true)
    {
        cin >> s;
        if(s == "end")
        {
            break;
        }
        insert_at_tail(head, tail, s);
    }
    int q;
    cin >> q;
    Node* temp = head;
    while (q--)
    {
        string a;
        cin >> a;
        if(a == "visit")
        {     
            string b;
            cin >> b;
            Node* temp2 = head;
            bool flag = true;
            while (temp2 != NULL)
            {
                if(temp2->val == b)
                {
                    cout << temp2->val << endl;
                    temp = temp2;
                    flag = false;
                    break;
                }
                temp2 = temp2->next;
            }
            if(flag)
                cout << "Not Available" << endl;
          
        }
        else if(a == "prev")
        {
            if(temp->prev != NULL)
            {
                cout << temp->prev->val << endl;
                temp = temp->prev;
            }
            else
                cout << "Not Available" << endl; 
        }
        else
        {
            if(temp->next != NULL)
            {
                cout << temp->next->val << endl;
                temp = temp->next;
            }
            else
                cout << "Not Available" << endl; 
        }
    }
    return 0;
}