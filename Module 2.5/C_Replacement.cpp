#include<iostream>
#include<algorithm>
#include<vector>
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
    replace_if(v.begin(),v.end(),(int x){return x>0;},1);
    replace_if(v.begin(),v.end(),(int x){return x<0;},2);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}


