#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
         cin >> s;
        int cnt1=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '.') cnt1++;
        }
 
    if(s.find("...") != string::npos)
        cout << 2 << '
';
    else
        cout << cnt1 << '
';
        
        
    }
}