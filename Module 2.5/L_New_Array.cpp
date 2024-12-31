#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n),v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int>v3=v1;
    v3.insert(v3.end(),v.begin(),v.end());
    for (int i = 0; i < 2*n; i++)
    {
        cout << v3[i] <<" ";
    }
    return 0;
}

