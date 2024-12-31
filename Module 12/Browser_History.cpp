#include<bits/stdc++.h>
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
        this->next = NULL;
        this->prev = NULL;
        }
};

void insert_tail(Node*& head, Node*& tail, const string name) 
{
    Node* newNode = new Node(name);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
Node* visit(Node*head, string val, Node* a) 
{
    Node* tmp = head;
    bool flag=false;

    while (tmp != NULL) 
    {
        if (tmp->val == val) 
        {
            flag=true;
            break;
        }
        tmp = tmp->next;
    }
    if(flag==true)
    {
        cout << tmp->val << endl;
        return tmp;
    }
    else 
    {
        cout << "Not Available" << endl;
        return a;
    }
}
Node*prev(Node* prev_a)
{
    if(prev_a->prev!=NULL)
    {
        cout << prev_a->prev->val<< endl;
        return prev_a->prev;
    }
    else 
    {
        cout << "Not Available" << endl;
        return prev_a;
    }
}
Node*next(Node* next_a)
{
    if(next_a->next!=NULL)
    {
        cout << next_a->next->val << endl;
        return next_a->next;
    }
    else 
    {
        cout << "Not Available" << endl;
        return next_a;
    }
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    string s;
    while (cin >> s && s != "end") 
    {
        insert_tail(head, tail, s);
    }

    Node* a = head;
    int q;
    cin >> q;
    while (q--) 
    {
        string cmd;
        cin >> cmd;
        if (cmd == "visit") 
        {
            string trgt;
            cin >> trgt;
            a= visit(head,trgt,a);
        } 
        else if (cmd == "prev") 
        {
          
           a=prev(a);
        } 
        else if (cmd == "next") 
        {  
            a = next(a);   
        }
         
    }
    return 0;
}