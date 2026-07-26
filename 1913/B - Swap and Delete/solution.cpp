#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int cnt0 = 0, cnt1 = 0;
 
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }
 
        int ans = 0;
 
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (cnt1 == 0) {
                    ans = s.size() - i;
                    break;
                }
                cnt1--;
            } else {
                if (cnt0 == 0) {
                    ans = s.size() - i;
                    break;
                }
                cnt0--;
            }
        }
 
        cout << ans << "
";
    }
 
}