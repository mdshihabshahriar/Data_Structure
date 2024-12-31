#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&v,int x,bool isLeft)
{
    int l=0;
    int r=v.size()-1;
    int ans = -1;
    while (l<=r)
    {
        int mid_index=(l+r)/2;
        if(v[mid_index]==x)
        {
            ans = mid_index;
            //break;
            if(isLeft) r = mid_index-1; 
            else l = mid_index+1; 
        }
        else if(x>v[mid_index])
        {
            //dane jao
            l=mid_index+1;
        }
        else
        {
            //bame jao
            r=mid_index-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int x;
    cin >> x;
    int l = search(v,x,true);
    int r = search(v,x,false);
    cout << (r-l)+1;
}    