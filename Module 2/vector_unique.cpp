#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i]; // 2,1,3,4,7,7,5,5
    }
    
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();
    cout << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << v[i] << " "; // 1,2,3,4,5,7
    }
    //unique(v.begin(),v.end()); // unique korle value gula double na eshe ekbar eshe kintu double gular jonne garbage value ashe
    return 0;
}
