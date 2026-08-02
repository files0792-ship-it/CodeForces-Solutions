#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
 
        ll b = (y + 1) * k - 1;
        ll a = (b + (x - 1) - 1) / (x - 1);
 
        cout << a + k << endl;
    }
}