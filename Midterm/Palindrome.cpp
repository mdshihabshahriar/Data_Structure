#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }    
};
bool is_Palindrome(Node* head) 
{
    if (head == NULL || head->next == NULL) return true;

    Node* tmp = head;
    while (tmp->next != NULL) 
    {
        tmp = tmp->next;
    }

    while (head != tmp && head->prev != tmp) 
    {
        if (head->val!= tmp->val) 
        {
            return false;
        }
        head = head->next;
        tmp = tmp->prev;
    }

    return true;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) 
    {
        cin >> val;
        if (val == -1) break;
        Node* newNode = new Node(val);
        if (head == NULL) 
        {
            head = tail = newNode;
        } else 
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    if (is_Palindrome(head)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    Node* tmp = head;
    while (tmp) 
    {
        Node* tmp2 = tmp;
        tmp = tmp->next;
        delete tmp2;
    }

    return 0;
}