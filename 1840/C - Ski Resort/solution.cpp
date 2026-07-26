#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
 
        ll ans = 0;
        ll cnt = 0;
 
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
 
            if (x <= q) {
                cnt++;
            } else {
                if (cnt >= k) {
                    ll x = cnt - k + 1;
                    ans += x * (x + 1) / 2;
                }
                cnt = 0;
            }
        }
 
        if (cnt >= k) {
            ll x = cnt - k + 1;
            ans += x * (x + 1) / 2;
        }
 
        cout << ans << "
";
    }
}