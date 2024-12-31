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
    //vector<int>::iterator it = max_element(v.begin(),v.end());// max number return korbe
    //vector<int>::iterator it = min_element(v.begin(),v.end());// minimum number return korbe
    //cout << *it << endl;
    //int x = max_element(v.begin(),v.end())-v.begin();// max number er index return korbe
    int x = min_element(v.begin(),v.end())-v.begin();// minimum number er index return korbe
    cout << x;
    return 0;
}
