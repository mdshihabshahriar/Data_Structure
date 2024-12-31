#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a;
    vector<int>x(a);
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    cin >> b;
    vector<int>y(b);
    for (int i = 0; i < b; i++)
    {
        cin >> y[i];
    }
    cin >> c;
    //x.resize(a+b);
    // for (int i = a-1; i >= c; i--)
    // {
    //     x[i+b]=x[i];
    // }
    // for (int i = 0; i < b; i++)
    // {
    //     x[c+i]=y[i];
    // }
    x.insert(x.begin()+c,y.begin(),y.end());
    for (int i = 0; i < a+b; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}
