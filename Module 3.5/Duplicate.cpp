#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(count(a.begin(),a.end(),a[i])>1)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}