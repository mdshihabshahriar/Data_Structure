#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    //priority_queue<int> pq; // max to min
    priority_queue<int,vector<int>,greater<int> > pq; // min to max
    while(true)
    {
        int c;
        cin >> c;
        if(c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if(c == 1)
        {
            pq.pop(); // O(logN)
        }
        else if(c == 2)
        {
            cout << pq.top() << endl; // O(N)
        }
        else
        {
            break;
        }
    }
    return 0;
}
