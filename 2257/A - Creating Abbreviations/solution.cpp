#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<string> w(n), abb(m);
        set<char> w_s, abb_s;
 
        for (int i = 0; i < n; i++) {
            cin >> w[i];
            w_s.insert(tolower(w[i][0]));
        }
 
        for (int i = 0; i < m; i++) {
            cin >> abb[i];
 
            for (char c : abb[i]) {
                abb_s.insert(tolower(c));
            }
        }
 
        bool ok= true;
 
        for (char c : abb_s) {
            if (!w_s.count(c)) {
                ok = false;
                break;
            }
        }
 
        cout<<(ok?"YES":"NO")<<endl;
    }
}