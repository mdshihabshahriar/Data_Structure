#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>myList = {10,20,30,10};
    // myList.remove(10);
    // myList.sort(); // choto theke boro
    // myList.sort(greater<int>()); // boro theke choto
    // myList.unique();
    myList.reverse();   
    for(int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}