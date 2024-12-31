#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); 
        int cur_idx = v.size()-1;       
        while(cur_idx != 0)
        {
            int parent_idx = (cur_idx-1)/2;
            if(v[parent_idx] > v[cur_idx])
            {
                swap(v[parent_idx],v[cur_idx]);
            }
            else break;
            cur_idx = parent_idx;
        }
    }
    for(auto u : v) cout << u << " ";
    return 0;
}
