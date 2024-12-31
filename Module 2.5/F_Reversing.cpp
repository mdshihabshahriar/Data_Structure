#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0,j=n-1;i < j; i++,j--)
    {
        swap(v[i],v[j]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}

