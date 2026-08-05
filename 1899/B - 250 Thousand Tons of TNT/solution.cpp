#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> divisors(int n){
    vector<ll> ans;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=n/i) ans.push_back(n/i);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        ll n;cin>>n;
        vector<ll> v(n+1);
        for (ll i = 1; i <=n; i++)
        {
            cin>>v[i];
        }
        vector<ll> p(n+1);
        p[0] = 0;
        for (int i = 1; i <=n; i++)
        {
            p[i] = p[i-1] + v[i];
        }
        ll max_f = LLONG_MIN;
        vector<ll> ese = divisors(n);
        for (ll j = 0; j < ese.size(); j++)
        {
            ll maxi = LLONG_MIN,mini = LLONG_MAX;
            ll k = ese[j];
            
        for (int i = 0; i <n; i+=k)
        {
            maxi = max(maxi,p[i+k] - p[i]);
            mini = min(mini,p[i+k] - p[i]);
        }
        max_f = max(max_f,maxi - mini);
        }
        
        cout<<max_f<<endl;
        
    }
}