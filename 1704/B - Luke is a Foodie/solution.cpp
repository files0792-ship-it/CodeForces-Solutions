#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
 
        int ans = 0;
 
        pair<int,int> a = {v[0] - x, v[0] + x};
 
        for (int i = 1; i < n; i++) {
            pair<int,int> b = {v[i] - x, v[i] + x};
 
            if (a.second < b.first || b.second < a.first) {
                ans++;
                a = b;
            } else {
                a.first = max(a.first, b.first);
                a.second = min(a.second, b.second);
            }
        }
 
        cout << ans << "
";
    }
}