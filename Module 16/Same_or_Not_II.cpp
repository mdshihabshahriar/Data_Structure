#include <bits/stdc++.h>
using namespace std;
class Node 
{
public:
    int val;
    Node* next;
    Node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};
class myStack 
{
public:
    Node* head = NULL;
    myStack() 
    {
        while (!isEmpty()) 
        {
            pop();
        }
    }
    void push(int val) 
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    int pop() 
    {
        if (isEmpty()) 
        {
            return -1;
        }
        int val = head->val;
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return val;
    }
    bool isEmpty() 
    {
        return head == NULL;
    }
};
class myQueue 
{
public:
    Node* head = NULL;
    Node* tail = NULL;

    myQueue() 
    {
        while (!isEmpty()) 
        {
            pop();
        }
    }

    void push(int val) 
    {
        Node* newNode = new Node(val);
        if (isEmpty()) 
        {
            head = newNode;
            tail = newNode;
        } 
        else 
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int pop() 
    {
        if (isEmpty()) 
        {
            return -1;
        }
        int val = head->val;
        Node* tmp = head;
        head = head->next;
        delete tmp;
        if (head == NULL) 
        {
            tail = NULL;
        }
        return val;
    }

    bool isEmpty() 
    {
        return head == NULL;
    }
};
int main() 
{
    int n, m;
    cin >> n >> m;

    myStack st;
    myQueue q;
    for (int i = 0; i < n;i++) 
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m;i++) 
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag = true;
    while (!st.isEmpty() && !q.isEmpty()) 
    {
        if (st.pop() != q.pop()) 
        {
            flag = false;
            break;
        }
    }
    if (!st.isEmpty() || !q.isEmpty()) 
    {
        flag = false;
    }
    if (flag == true) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
