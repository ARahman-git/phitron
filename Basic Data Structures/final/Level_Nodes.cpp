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


int nodeLevel(Node *root, vector <int> &v)
{
    if(root == NULL)
        return -1;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    int x;
    cin >> x;

    while(!q.empty())
    {
        pair<Node*, int> pr = q.front();

        Node* node = pr.first;
        int level = pr.second;
        q.pop();

        if(level == x) v.push_back(node->val);
        if(node->left) q.push({node->left, level + 1});
        if(node->right) q.push({node->right, level + 1});
        
    }

    return -1;
}
int main()
{
    vector <int> v;
    Node* root = input_tree();
    nodeLevel(root, v);
    
    if(v.empty()) cout << "Invalid";
    else
    {
        for(int i : v)
            cout << i << " ";
    }
    return 0;
}