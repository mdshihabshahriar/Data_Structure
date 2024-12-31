#include<bits/stdc++.h>
using namespace std;
bool Empty(string s) 
{
  stack<char> st;
  for (char c : s) 
  {
    if (c == '0') 
    {
      st.push(c);
    } 
    else 
    {
      if (!st.empty() && st.top() == '0') 
      {
        st.pop();
      }
    }
  }
  return st.empty();
}
int main() 
{
  int t;
  cin >> t;

  while (t--) 
  {
    string s;
    cin >> s;
    if (Empty(s)) 
    {
      cout << "YES" << endl;
    } 
    else 
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
