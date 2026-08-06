#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool height(ll h,ll x,vector<ll>& v){
    ll ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
            if(h-v[i]>=0)ans+=h-v[i];
        
    }
    if(x>=ans)return true;
    return false;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        ll n,x;cin>>n>>x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll l = 1,r = 2e9+ 10;
        while (l<r)
        {
        ll mid = l + ((r-l+1)/2);
        if(height(mid,x,v)) {
            l = mid;
        }
        else r= mid-1;
        }
        
        cout<<l<<endl;
        
}
}