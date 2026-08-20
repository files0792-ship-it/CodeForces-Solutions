#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        bool sorted = true;
        ll mn = LLONG_MAX;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
                sorted = false;
            mn = min(mn, a[i] - a[i - 1]);
        }
        if (!sorted)
            cout << 0 << '
';
        else
            cout << mn / 2 + 1 << '
';
    }
}