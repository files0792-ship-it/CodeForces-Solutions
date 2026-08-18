#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin >> t;
 
    while (t--) {
        int n;cin >> n;
 
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
 
        ll g1 = 0, g2 = 0;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) g1 = __gcd(g1, a[i]);
            else g2 = __gcd(g2, a[i]);
        }
 
        bool ok1 = true, ok2 = true;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && a[i] % g2 == 0) ok2 = false;
            if (i % 2 == 1 && a[i] % g1 == 0) ok1 = false;
        }
 
        if (ok1) cout<<g1<<endl;
        else if (ok2) cout<<g2<<endl;
        else cout<<0<<endl;
    }
}