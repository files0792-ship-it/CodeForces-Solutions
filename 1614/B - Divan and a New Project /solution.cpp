#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        for (ll i = 0; i < n; i++){
            ll val;
            cin >> val;
            a[i] ={val,i};
        }
 
        sort(a.rbegin(), a.rend());
 
        vector<ll> x(n+1);
        x[0] = 0;
 
        ll total = 0;
        ll pos = 1, neg = -1;
 
        for (int i = 0; i < n; i++){
            ll cnt = a[i].first;
            ll idx = a[i].second;
            ll dist;
 
            if (i % 2 == 0){
                dist = pos;
                pos++;
            }
            else{
                dist = neg;
                neg--;
            }
            x[idx+1] = dist;
            total += (ll)cnt * 2 * abs(dist);
        }
        cout << total << endl;
 
        for (int i = 0; i <= n; i++)
        {
            cout << x[i]<<" ";
        }
        cout << endl;
    }
}