#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int> > pq; 
        set<int> s; 
        for (int i = 0; i < n; i++) 
        {
            int val;
            cin >> val;
            if (s.find(val) == s.end()) 
            { 
                pq.push(val);
                s.insert(val);
            }
        }
        bool ans = true;
        while (!pq.empty()) 
        {
            if (!ans) cout << " ";
            cout << pq.top();
            pq.pop();
            ans = false;
        }
        cout << endl;
    }
    return 0;
}
