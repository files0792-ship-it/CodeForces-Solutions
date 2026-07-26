#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<pair<int,int>> v;
 
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
 
            int rem = x % k;
            if (rem == 0) rem = k;
 
            v.push_back({rem, i});
        }
 
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });
 
        for (auto p : v)
            cout << p.second << " ";
        cout << "
";
    }
}