#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const ll N = 1e9 + 7;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--){
        ll n;
        cin >> n;
 
        vector<ll> a(n), b(n);
 
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
 
        ll ans = 1;
        bool flag = false;
 
        for (int i = n - 1; i >= 0; i--){
            ll x = i;
            auto it = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            if (x-it+1 <= 0){
                flag = true;
                cout << 0 << endl;
                break;
            }
            ans = (ans * (x-it+1)) % N;
        }
 
        if(!flag)cout << ans << endl;
    }
}