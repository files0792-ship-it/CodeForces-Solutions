#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int a = 0, b = 0;
 
        for (int x = 0; x < 2; x++){
            bool ok = 1;
 
            for (int i = 0; i < n; i += 2){
                int y = x ^ ((i / 2) & 1);
 
                if (s[i] != '?' && s[i] - '0' != y){
                    ok = 0;
                    break;
                }
            }
            if (ok)a++;
        }
 
        for (int x = 0; x < 2; x++){
            bool ok = 1;
 
            for (int i = 1; i < n; i += 2){
                int y = x ^ (((i - 1) / 2) & 1);
                if (s[i] != '?' && s[i] - '0' != y)
                {
                    ok = 0;
                    break;
                }
            }
            if (ok) b++;
        }
        cout << a * b<< endl;
    }
}