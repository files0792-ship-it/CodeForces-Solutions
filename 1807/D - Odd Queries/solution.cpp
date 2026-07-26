#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 
    while (t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> arr(n+1);
        vector<ll> pf(n+1);
        pf[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            pf[i] = pf[i-1] + arr[i];
        }
        
        for (int i = 1; i <= q; i++)
        {
           ll l,r,k;
           cin>>l>>r>>k;
           if((pf[n] - pf[r] + pf[l-1] + (r-l+1)*k) % 2 !=0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
            
        }
        
        
    }
 
}