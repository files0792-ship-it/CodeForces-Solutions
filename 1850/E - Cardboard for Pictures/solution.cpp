#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        ll n,c;
        cin>>n>>c;
        ll sum=0,sq_sum=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            sq_sum+=x*x;
        }
 
        __int128 val=(__int128)sum*sum+(__int128)n*(c-sq_sum);
        ll root=sqrt((long double)val);
        ll d=-sum+root;
        cout<<d/(2*n)<<endl;
    }
}