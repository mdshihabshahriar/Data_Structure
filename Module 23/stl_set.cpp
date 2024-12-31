#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n;
    cin >> n;
    set<int>s;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    cout << s.count(5) << endl; // O(logN)
    if(s.count(2)) cout << "Yes" << endl;
    else cout << "No" << endl;
    // for(auto u : s)
    // {
    //     cout << u << endl;
    // }
    return 0;
}
