#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        map<int, int> mp1, mp2;
 
        int cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1])
                cnt++;
            else {
                mp1[a[i]] = max(mp1[a[i]], cnt);
                cnt = 1;
            }
        }
        mp1[a[n - 1]] = max(mp1[a[n - 1]], cnt);
 
        cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            if (b[i] == b[i + 1])
                cnt++;
            else {
                mp2[b[i]] = max(mp2[b[i]], cnt);
                cnt = 1;
            }
        }
        mp2[b[n - 1]] = max(mp2[b[n - 1]], cnt);
 
        int ans = 0;
 
        for (auto x : mp1)
            ans = max(ans, x.second + mp2[x.first]);
 
        for (auto x : mp2)
            ans = max(ans, x.second + mp1[x.first]);
 
        cout << ans << '
';
    }
}