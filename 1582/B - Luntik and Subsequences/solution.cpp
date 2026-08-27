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
       ll n;cin>>n;vector<ll> v(n);
       ll cnt0=0,cnt1=0;
        for(int i = 0; i < n; i++){
            ll x;cin>>x;
            if(x==0)cnt0++;
            if(x==1)cnt1++;
        }
        cout<<(1LL<<cnt0)*cnt1<<endl;
    }
     
    }