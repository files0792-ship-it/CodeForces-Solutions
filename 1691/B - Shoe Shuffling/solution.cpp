#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<pair<int,int>> v(n);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[i] = {x, i + 1};
        }
 
        map<int,int> mpp;
        for (int i = 0; i < n; i++)
            mpp[v[i].first]++;
 
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.first < b.first;
        });
 
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (mpp[v[i].first] == 1) {
                flag = false;
                break;
            }
        }
 
        if (!flag) {
            cout << -1 << endl;
        }
        else {
            vector<int> ans(n + 1);
 
            int i = 0, j = 0;
 
            while (j < n) {
                while (j < n && v[j].first == v[i].first)
                    j++;
 
                for (int k = i; k < j; k++) {
                    if (k == j - 1)
                        ans[v[k].second] = v[i].second;
                    else
                        ans[v[k].second] = v[k + 1].second;
                }
 
                i = j;
            }
 
            for (int i = 1; i <= n; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}