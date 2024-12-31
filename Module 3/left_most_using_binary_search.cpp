#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int l=0;
    int r=n-1;
    int ans = -1;
    while (l<=r)
    {
        int mid_index=(l+r)/2;
        if(a[mid_index]==x)
        {
            ans = mid_index;
            r = mid_index-1; // jodi left most value pete chai eta dite hobe ar break diya jabe na
            
        }
        else if(x>a[mid_index])
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
    cout << ans;
    return 0;
}