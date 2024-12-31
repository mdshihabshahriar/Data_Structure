#include<iostream>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
};
int main()
{
    Node a,b;

    a.val=10;
    b.val=20;

    a.next=&b;
    b.next=NULL;

    cout << a.val << endl;
    //cout << b.val << endl; // emni b er value
    //cout << (*a.next).val << endl; // type 1
    cout << a.next->val << endl; // type 2 1&2 jekono ekvabe ber korlei hobe
    return 0; 
}
