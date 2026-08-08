#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
 
        vector<ll> v(n), p(n + 1);
 
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        sort(v.rbegin(), v.rend());
 
        p[0] = 0;
        for (int i = 0; i < n; i++)
        {
            p[i + 1] = p[i] + v[i];
        }
 
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        ll maxi = LLONG_MIN;
 
        for (int i = 0; i <= k; i++)
        {
            maxi = max(maxi, sum - (p[k - i] + p[n] - p[n - (2 * i)]));
        }
 
        cout << maxi << endl;
    }
}