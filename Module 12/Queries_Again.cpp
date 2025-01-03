#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    newNode->next = NULL;
}
void insert_head(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int size(Node* head) 
{
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL) 
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void print_normal(Node* head) 
{
    cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node* tail) 
{
    cout << "R -> ";
    Node* tmp = tail;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_position(Node*& head, int pos, int val) 
{
    Node* newNode = new Node(val);
    Node* tmp = head; 
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    if (tmp->next != NULL) 
    {
        tmp->next->prev = newNode;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}
int main() 
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--) 
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0) 
        {
            insert_head(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        } 
        else if (pos == size(head)) 
        {
            insert_tail(head, tail, val);
            print_normal(head);
            print_reverse(tail);    
        } 
        else if (pos > 0 && pos < size(head)) 
        {
            insert_at_position(head, pos, val);
            print_normal(head);
            print_reverse(tail);
        }
        else 
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}