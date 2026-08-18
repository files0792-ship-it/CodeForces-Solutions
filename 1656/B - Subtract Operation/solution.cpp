#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
        ll n,k;cin>>n>>k;vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        set<ll> st;
        for(auto it : v)st.insert(it);
        bool flag = false;
        for(auto it :st){
            if(st.find(it-k)!=st.end()){
                flag = true;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
}
 