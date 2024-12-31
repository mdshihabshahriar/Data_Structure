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
int Summation(Node* root)
{
    if(root == NULL) return 0;
    long long sum = 0;
    queue<Node*>p;
    p.push(root);
    while(!p.empty())
    {
        Node* cur = p.front();
        p.pop();
        if(cur->left || cur->right)
        {
            sum+= cur->val;
            if(cur->left) p.push(cur->left);
            if(cur->right) p.push(cur->right);
        }
    }
    return sum;
}
int main()
{
    Node* root = input_tree();
    int result = Summation(root);
    cout << result << endl;
    return 0;
}

