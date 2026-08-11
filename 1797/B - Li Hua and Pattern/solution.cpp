#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
int t;
cin >> t;
 
while (t--) {
   ll n,k;cin>>n>>k;
   vector<vector<ll>> vec(n,vector<ll>(n,0));
   for (ll i = 0; i < n; i++)
   {
    for (ll j  = 0; j<n; j++)
    {
        cin>>vec[i][j];
    }
   }
   ll cnt = 0;
   for (ll i = 0; i < n/2; i++) {
    for (ll j = 0; j < n; j++) {
        if (vec[i][j] != vec[n-i-1][n-j-1])
            cnt++;
    }
}
if (n % 2 == 1) {
    for (ll j = 0; j < n/2; j++){
        if (vec[n/2][j] != vec[n/2][n-j-1])
            cnt++;
}
}
   
   if((cnt<=k) && (n%2 ==1 || (k - cnt)%2==0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
 
}