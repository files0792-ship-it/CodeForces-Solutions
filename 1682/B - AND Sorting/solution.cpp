#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
 
        vector<int> v(n);
 
        for (int i = 0; i < n; i++)
            cin >> v[i];
 
        ll ans = (1LL << 30) - 1;
 
        for (int i = 0; i < n; i++) {
            if (v[i] != i)
                ans &= v[i];
        }
 
        cout << ans << endl;
    }
}