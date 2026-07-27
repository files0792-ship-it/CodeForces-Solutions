#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
 
        if (s < b * k || s > b * k + n * (k - 1)) {
            cout << -1 << '
';
            continue;
        }
 
        vector<long long> a(n, 0);
 
        a[0] = b * k;
        long long rem = s - b * k;
 
        for (int i = 0; i < n && rem > 0; i++) {
            long long add = min(rem, k - 1);
            a[i] += add;
            rem -= add;
        }
 
        for (int i = 0; i < n; i++)cout << a[i] << " ";
        cout <<endl;
    }
}