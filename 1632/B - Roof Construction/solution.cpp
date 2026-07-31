#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
        int k = 1;
        while (k * 2 <= n - 1)k *= 2;
        
        for (int i = k-1; i >=0; i--)
        {
            cout<<i<<" ";
        }
        for (int i = k; i <=n-1; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
        
}
}