#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int cnt = 0;
 
        while (x.find(s) == string::npos && cnt<=6) {
            x += x;
            cnt++;
        }
 
        if (x.find(s) != string::npos)
            cout << cnt << '
';
        else
            cout << -1 << '
';
    }
}