#include <bits/stdc++.h>
using namespace std;

int main() 
{
    list<int>myList;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i) 
    {
        int X, V;
        cin >> X >> V;
        if (X == 0) 
        {
            myList.push_front(V);
        } 
        else if (X == 1) 
        {
            myList.push_back(V);
        } 
        else if (X == 2) 
        {
            int ind = 0;
            auto it = myList.begin();
            while (it != myList.end() && ind < V) 
            {
                it++;
                ind++;
            }

            if (it != myList.end()) 
            {
                myList.erase(it);
            }
        }
        cout << "L -> ";
        for (int val : myList) 
        {
            cout << val << " ";
        }
            cout << endl;
            cout << "R -> ";
        for (auto it = myList.rbegin(); it != myList.rend(); it++) 
        {
            cout << *it << " ";
        }
            cout << endl;
    }

    return 0;
}
