#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) 
    {
        string s;
        getline(cin, s);
        map<string, int> mp;
        string word;
        int maxCount = 0;
        string maxWord;
        stringstream ss(s);
        while (ss >> word) 
        {
            mp[word]++;
            if (mp[word] > maxCount) 
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << maxCount << endl;
    }
    return 0;
}
