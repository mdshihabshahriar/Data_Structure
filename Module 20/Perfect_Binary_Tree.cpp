#include<bits/stdc++.h>
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
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // 1. ber kore ana
        Node* p = q.front();
        q.pop();

        // 2. jabotiyo kaj
        int l,r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push kora
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int Depth(Node* root) 
{
    if (root == NULL) return 0;
    return 1 + max(Depth(root->left), Depth(root->right));
}
int countNodes(Node* root) 
{
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
bool perfectTree(Node* root) 
{
    if (root == NULL) return true;
    int depth = Depth(root);
    int totalNodes = countNodes(root);
    return totalNodes == (pow(2, depth) - 1);
}
int main()
{
    Node* root = input_tree();
    if (perfectTree(root)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}

