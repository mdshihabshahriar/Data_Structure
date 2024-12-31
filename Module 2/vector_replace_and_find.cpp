#include<bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    // vector<int>v={1,2,3,4,2,6,7,2,8,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v)
    // {
    //     cout << x <<" ";
    // }

    // find
    vector<int>v={1,2,3,4,2,6,7,2,8,2};
    auto it=find(v.begin(),v.end(),3);
    // cout << *it;
    if(it == v.end()) cout << "Not found";
    else cout << "Found";
    return 0;
}