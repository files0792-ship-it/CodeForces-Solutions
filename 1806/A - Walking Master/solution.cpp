#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while (t--)
    {
        ll a,b,c,d;cin>>a>>b>>c>>d;
        if(d<b)
        {
            cout<<-1<<"
";
        }
        else
        {
            ll up=d-b;
            ll x=a+up;
            if(x<c)
            {
                cout<<-1<<"
";
            }
            else
            {
                cout<<up+(x-c)<<"
";
            }
        }
    }
}