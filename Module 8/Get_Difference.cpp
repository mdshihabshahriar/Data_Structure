#include<iostream>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }    
};
int difference(Node*head)
{
    if(!head) 
    {
        return 0;
    }    
    int mn=INT_MAX;
    int mx=INT_MIN;
    while(head)
    {
        mn=min(mn,head->val);
        mx=max(mx,head->val);
        head=head->next;
    }
    return mx-mn;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    cin >> val;
    while(val!=-1)
    {
        Node* newNode=new Node(val);
        if(!head)
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        cin >> val;
    }
    int diff=difference(head);
    cout << diff << endl;

    while(head)
    {
        Node* tmp = head;
        head=head->next;
        delete tmp;
    }
    return 0;
}