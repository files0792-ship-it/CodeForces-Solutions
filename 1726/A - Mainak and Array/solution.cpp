#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int &x : a) cin >> x;
 
        if(n == 1) {
            cout << 0 << '
';
            continue;
        }
 
        int ans = a[n-1] - a[0];
 
        for(int i = 0; i < n-1; i++) {
            ans = max(ans, a[n-1] - a[i]);
        }
 
        for(int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }
 
        for(int i = 0; i < n-1; i++) {
            ans = max(ans, a[i] - a[i+1]);
        }
 
        cout << ans << '
';
    }
}