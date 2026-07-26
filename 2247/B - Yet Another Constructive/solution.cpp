#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
 
        if (k > m) {
            cout << "NO
";
            continue;
        }
        cout << "YES
";
        vector<ll> a;
 
        for (int i = 1; i < k; i++) a.push_back(1);
        a.push_back(m - k + 1);
 
        for (int i = k; i < n; i++)
            a.push_back(1);
 
        for (ll x : a) cout << x << " ";
        cout << "
";
    }
}