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

void insert_at_tail(Node *&head,int x)
{
    Node * newNode=new Node(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void insert_head(Node*& head, int x) 
{
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void delete_from_position(Node*& head,int a)
{
    if (head == NULL)
    {
        return;
    }
  if (a == 0)
  {
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    return;
  }
 
  Node *tmp = head;
  for (int i = 1; i <= a-1; i++)
  {
    if (tmp == NULL || tmp->next == NULL)
    return;
    tmp = tmp->next;
  }
 
  if (tmp->next == NULL)
    return;
 
  Node *deleteNode=tmp->next;
  tmp->next=tmp->next->next;
  delete deleteNode;
}
int size(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void print_linked_list(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_head(Node*& head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
int main() 
{
    Node* head = NULL;
    int q;
    cin >> q;

    while (q--) 
    {
        int x, v;
        cin >> x >> v;
        if(x==0)
        {
            insert_head(head,v);
        }
        else if(x==1)
        {
            insert_at_tail(head,v);
        }
        else if(x==2)
        {
            delete_from_position(head,v);   
        }
     print_linked_list(head);
    }

    return 0;                               
}

