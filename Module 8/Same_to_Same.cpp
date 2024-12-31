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

void insert_at_tail(Node*& head, Node*& tail, int val)
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

int size_node(Node* head)
{
    int size = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

void cmp(Node* head1, Node* head2)
{
    int size1 = size_node(head1);
    int size2 = size_node(head2);

    if (size1 != size2)
    {
        cout << "NO" << endl;
        return;
    }

    bool flag = true;
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }

    cmp(head1, head2);

    return 0;
}
