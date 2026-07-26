#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, p;
        cin >> n >> p;
 
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        vector<pair<long long, long long>> v;
        for (int i = 0; i < n; i++)
            v.push_back({b[i], a[i]});
 
        sort(v.begin(), v.end());
 
        long long ans = p;
        long long informed = 1;
 
        for (int i = 0; i < n && informed < n; i++) {
            long long cost = v[i].first;
            long long cnt = v[i].second;
 
            if (cost >= p) break;
 
            long long take = min(cnt, n - informed);
            ans += take * cost;
            informed += take;
        }
 
        ans += (n - informed) * p;
 
        cout << ans << '
';
    }
 
}