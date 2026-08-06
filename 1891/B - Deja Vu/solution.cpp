#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,q;cin>>n>>q;
        vector<ll> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
 
        int last=31;
        while(q--){
            int x;cin>>x;
            if(x>=last)continue;
 
            ll p=(1LL<<x);
            for(int i=0;i<n;i++){
                if(a[i]%p==0){
                    a[i]+=(1LL<<(x-1));
                }
            }
            last=x;
        }
 
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}