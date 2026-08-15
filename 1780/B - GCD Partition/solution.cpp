#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
    ll n;cin>>n;vector<ll>v(n+1),p(n+1);
    p[0] = 0;
    for (int i = 1; i <=n; i++)
    {
        cin>>v[i];
        p[i] = p[i-1]+v[i];
    }
    ll maxi = LLONG_MIN;
    for (int i = 1; i <n; i++)
    {
        maxi = max(maxi,__gcd(p[i],p[n] - p[i]));
    }
    cout<<maxi<<endl;
}
}