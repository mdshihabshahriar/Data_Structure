#include <bits/stdc++.h>
using namespace std;
string isValid(string s) 
{
    stack<char> st;
    for (char c : s) 
    {
        if (!st.empty() && st.top() != c) 
        {
            st.pop();
        } 
        else 
        {
            st.push(c);
        }
    }
    if (st.empty()) 
    {
        return "YES";
    } 
    else 
    {
        return "NO";
    }
}
int main() 
{
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) 
    {
        string s;
        getline(cin, s);
        cout << isValid(s) << endl;
    }
    return 0;
}
