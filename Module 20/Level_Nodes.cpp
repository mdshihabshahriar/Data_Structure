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
void printLevel(Node* root, int x) {
    if (!root) 
    {
        cout << "Invalid" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    int cur = 0;
    bool flag = 1;
    while (!q.empty()) 
    {
        int size = q.size();
        if (cur == x) 
        {
            flag = 0;
            while (size--) 
            {
                Node* f = q.front();
                q.pop();
                cout << f->val << " ";
            }
            cout << endl;
            break;
        }
        while (size--) 
        {
            Node* p = q.front();
            q.pop();
            if (p->left) q.push(p->left);
            if (p->right) q.push(p->right);
        }
        cur++;
    }
    if (flag) 
    {
        cout << "Invalid" << endl;
    }
}
int main()
{
    Node* root = input_tree();
    int x;
    cin >> x;
    printLevel(root,x);
    return 0;
}

