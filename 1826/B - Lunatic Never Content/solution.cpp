#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<ll> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        ll ans = 0;
 
        for (int i = 0; i < n / 2; i++) {
             ans = __gcd(ans,abs(a[i]-a[n-i-1]));
        }
 
        cout << ans << '
';
    }
 
    return 0;
}