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

void leaf(Node* root, vector<int> &v)
{

    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL)
        v.push_back(root->val);
    leaf(root->left, v);
    leaf(root->right, v);
    
}

int main()
{
    vector<int> v;
    Node* root = input_tree();
    leaf(root, v);
    sort(v.begin(), v.end(), greater<>());
    for (int i : v)
    {
        cout << i << " ";
    }
    
    return 0;
}