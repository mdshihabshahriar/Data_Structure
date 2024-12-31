#include <iostream>
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
    tail = newNode;    
}
void find_Index(Node* head, int a)
{
    int pos = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        if (a == temp->val)
        {
            cout << pos << endl;
            return;
        }
        pos++;
        temp = temp->next;
    }

    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node* head = NULL;
        Node* tail = NULL;
        int val;

        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        int a;
        cin >> a;
        find_Index(head,a);
    }

    return 0;  
}
