#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
ll t;
cin >> t;
 
while (t--) {
    string s;cin>>s;
    vector<ll> ans;
    ll n = s.size();
    bool flag = true;
    ll I=0,J=n,cnt = 0;
 
    for (ll i = n-1; i >=0; i--)
    {
        if(s[i] == '1'){
            cnt++;
        }
        else{
            flag = false;
            J=i;
            break;
        }
    }
 
    for (ll i = 0; i < n && !flag; i++)
    {
        if(s[i] == '1'){
            cnt++;
            I= i;
        }
        else break;
    }
    
    ans.push_back(cnt);
    cnt = 0;
    for (ll i = I+1; i < J; i++)
    {
        if(s[i] == '1')cnt++;
        else{
            ans.push_back(cnt);
            cnt = 0;
 
        }
 
    }
    ans.push_back(cnt);
    ll x = *max_element(ans.begin(),ans.end());
    ll maxi = 0;
    for (ll i = 1; i <=x; i++)
    {
        maxi = max(maxi,i*(x-i+1));
    }
    if(!flag)cout<<maxi<<endl;
    else cout<<x*x<<endl;
}
 
 
}