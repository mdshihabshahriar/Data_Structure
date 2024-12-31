#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int>frq(26,0);
    for(char ch:s)
    {
        frq[ch-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (frq[i]>0)
        {
            char ch='a'+i;
            cout << ch <<" : "<< frq[i] << endl;
        }    
    }
    return 0;
}