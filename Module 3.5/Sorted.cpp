#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
    bool flag=true;
    for (int i = 1; i < n; i++)
    {
        if(a[i]<a[i-1])
        {
           flag=false;
           break; 
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}


