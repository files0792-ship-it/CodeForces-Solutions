#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll min_dis(vector<pair<ll,ll>>& v,pair<ll,ll> a){
    ll mini = LLONG_MAX;
    for (int i = 1; i < v.size(); i++)
    {
        mini = min(mini,(abs(v[i].first-a.first)+abs(v[i].second-a.second)));
    }
    return mini;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k,a,b;cin>>n>>k>>a>>b;
        vector<pair<ll,ll>> v(n+1),major(k+1);
        
        for (int i = 1; i <= n; i++)
        {
            ll x,y;
            cin>>x>>y;
            v[i].first=x;v[i].second=y;
        }
 
        for (int i = 1; i <= k; i++)
        {
            major[i]={v[i].first,v[i].second};
        }
 
        ll direct=abs(v[a].first-v[b].first)+abs(v[a].second-v[b].second);
            if(k==0){
        cout<<direct<<endl;
        continue;
    }
        if(a<=k){
            if(b<=k){
                cout<<0<<endl;
            }
            else{
                cout<<min(direct,min_dis(major,v[b]))<<endl;
            }
        }
        else{
            if(b<=k){
                cout<<min(direct,min_dis(major,v[a]))<<endl;
            }
            else{
                cout<<min(direct,min_dis(major,v[a])+min_dis(major,v[b]))<<endl;
            }
        }
    }
}