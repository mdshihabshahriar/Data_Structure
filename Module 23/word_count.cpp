#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int>mp;
    while(ss >> word)
    {
        mp[word]++;
    }
    for(auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }
    //cout << mp["football"] << endl;
    return 0;
}
