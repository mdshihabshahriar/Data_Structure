#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    map<string,int>mp;
    //mp["sakib"] = 75;
    mp.insert({"sakib",75}); // O(logN)
    mp.insert({"tamim",19});
    mp.insert({"shihab",7});

    for(auto u : mp)
    {
        cout << u.first << " " << u.second << endl; // O(logN)
    }
    cout << mp["sakib"] << endl;
    return 0;
}
