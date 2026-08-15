#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
   vector<ll> v(n+1);
   vector<ll> ans;
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    ans.push_back(v[1]);
    for (int i = 1; i < n; i++)
    {
        if(v[i+1] ==1 && v[i]==1)ans.push_back(1);
        else if(v[i+1] ==1 && v[i]!=1){
            ans.push_back(1);
            ans.push_back(1);
        }
        else if(v[i+1]!=1 && v[i] == 1)ans.push_back(v[i+1]);
        else{
            ans.push_back(min(v[i],v[i+1])-1);
            ans.push_back(v[i+1]);
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
    
    }
    
   
}