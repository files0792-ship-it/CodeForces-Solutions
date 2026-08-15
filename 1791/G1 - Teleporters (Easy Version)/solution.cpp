#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
    ll n,c;cin>>n>>c;vector<ll>v(n+1);
    for (int i = 1; i <=n; i++)
    {
        ll x;cin>>x;
        v[i] = x+i;
    }
    sort(v.begin(),v.end());
    ll cnt = 0;
    if(v[1]>c){
        cout<<0<<endl;
        continue;
    }
    ll sum = v[1];
    cnt = 1;
    for (int  i =2; i <=n; i++)
    {
        if(sum+v[i]<=c){
            sum+=v[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
}