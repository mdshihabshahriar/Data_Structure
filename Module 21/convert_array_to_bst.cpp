#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
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
Node* convert(int a[],int n,int l,int r)
{
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftRoot = convert(a,n,l,mid-1);
    Node* rightRoot = convert(a,n,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
void level_order(Node* root)
{
    if(root == NULL)
    {
        cout << "Tree nai";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int main()
{
    optimize();
    int n,l,r;
    cin >> n;
    l = 0, r = n-1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node* root = convert(a,n,l,r);
    level_order(root);
    return 0;
}
