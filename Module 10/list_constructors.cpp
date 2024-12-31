#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList;
    // list<int>myList(10,5);
    // list<int> list2 = {1,2,3,4,5};
    int a[5] = {10,20,30,40,50};
    vector<int>v={10, 20, 30, 40, 50};
    list<int> myList(v.begin(), v.end());
    // list<int>myList(a,a+5);
    // list<int> myList(list2);
    // cout<<myList.front();
    // for(auto it = myList.begin();it!=myList.end();it++)
    // {
    //    cout << *it << endl;  
    // }
       
    for (int val :myList)
    {
        cout << val << endl;
    }   
    return 0;
}
