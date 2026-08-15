#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const ll M = 1e9+7;
const ll inv  = 166666668;
int main() {
    int t;cin>>t;
    while (t--)
    {
    ll n;cin>>n;
 
    ll ans = n%M;
    ans = ans*((4*n%M*n%M+3*n%M-1+M)%M)%M;
    ans = ans*inv%M;
    ans = ans*2022%M;
 
    cout<<ans<<endl;
    }
}
 