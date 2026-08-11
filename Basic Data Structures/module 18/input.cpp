#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue <Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        
        Node* newLeft, *newRight;
        if(l == -1) newLeft = NULL;
        else newLeft = new Node(l);
        

        if(r == -1) newRight = NULL;
        else newRight = new Node(r);

        p->left = newLeft;
        p->right = newRight;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

void preOrder(Node* root)
{
    if(root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node* root = input_tree();
    preOrder(root);
    return 0;
}