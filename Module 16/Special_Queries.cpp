#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int q;
    cin >> q;
    queue<string>l;
    vector<string> v;
    while (q--) 
    {
        int com;
        cin >> com;
        if (com == 0) 
        {
            string name;
            cin >> name;
            l.push(name);
            v.push_back(name);
        } 
        else 
        {
            if (v.empty()) 
            {
                cout << "Invalid" << endl;
            } 
            else 
            {
                string removed = l.front();
                l.pop();
                
                for (auto it = v.begin(); it != v.end(); ++it) 
                {
                    if (*it == removed) 
                    {
                        cout << removed << endl;
                        v.erase(it);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
