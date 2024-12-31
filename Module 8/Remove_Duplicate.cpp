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

void delete_node(Node* head) 
{
    while (head != NULL) 
    {
        Node* temp = head;
        int val = temp->val;

        while (temp->next != NULL) 
        {
            if (temp->next->val == val) 
            {
                Node* delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
            } 
            else 
            {
                temp = temp->next;
            }
        }
        head = head->next;
    }
}
void print_linked_list(Node * head)
{
    Node *temp=head;
    while(temp!=NULL)
    { 
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;; 
}
int main() 
{
       Node*head=NULL;
       Node* tail = NULL;

       int val;
       while(true)
       { 
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val); 
       }
    delete_node(head);
    print_linked_list(head);

    return 0;
}
