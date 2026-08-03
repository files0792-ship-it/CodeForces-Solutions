#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        ll a, b;
        ll cnt = 0;
        cin >> a >> b;
 
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
 
        if (a < b)
        {
            if (b % a != 0)
            {
                cout << -1 << endl;
                continue;
            }
 
            ll x = b / a;
 
            while (x != 1)
            {
                if (x % 8 == 0)
                    x = x / 8;
                else if (x % 4 == 0)
                    x = x / 4;
                else if (x % 2 == 0)
                    x = x / 2;
                else
                {
                    cnt = -1;
                    break;
                }
                cnt++;
            }
        }
 
        else if (a > b)
        {
            if (a % b != 0)
            {
                cout << -1 << endl;
                continue;
            }
 
            ll x = a / b;
 
            while (x != 1)
            {
                if (x % 8 == 0)
                    x = x / 8;
                else if (x % 4 == 0)
                    x = x / 4;
                else if (x % 2 == 0)
                    x = x / 2;
                else
                {
                    cnt = -1;
                    break;
                }
                cnt++;
            }
        }
 
        cout << cnt << endl;
    }
}