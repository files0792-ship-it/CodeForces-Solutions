#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        map<int, int> fr;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            fr[x]++;
        }
 
        if (fr.size() > 2) {
            cout << "NO
";
            continue;
        }
 
        vector<int> cnt;
        for (auto [x, f] : fr)
            cnt.push_back(f);
        if (cnt.size() == 1) {
            cout << "YES
";
        } 
        else {
            int a = cnt[0],b = cnt[1];
 
            if (abs(a-b) <= 1) cout<< "YES
";
            else cout<< "NO
";
        }
    }
}