#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
    ll n;cin>>n;
    vector<ll>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]!=a[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<-1<<endl;
        continue;
    }
    auto x = lower_bound(a.begin(),a.end(),*max_element(a.begin(),a.end())) - a.begin();
    cout<<x<<" "<<n-x<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = x; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;    
}
}