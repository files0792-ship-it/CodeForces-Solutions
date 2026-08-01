#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> mat(n, vector<int>(m));
        int cnt = 0;
        int mn = INT_MAX;
 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int x;
                cin >> x;
 
                if(x < 0) cnt++;
 
                mat[i][j] = abs(x);
                mn = min(mn, mat[i][j]);
            }
        }
 
        ll sum = 0;
 
        if(cnt % 2 == 1) {
            bool done = false;
 
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(mat[i][j] == mn && !done) {
                        mat[i][j] = -mat[i][j];
                        done = true;
                    }
 
                    sum += mat[i][j];
                }
            }
        }
        else {
            for(int i = 0; i < n; i++)
                for(int j = 0; j < m; j++)
                    sum += mat[i][j];
        }
 
        cout << sum << '
';
    }
}