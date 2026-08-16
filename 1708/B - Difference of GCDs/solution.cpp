#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
        ll n,l,r;cin>>n>>l>>r;
        vector<ll>ans;
        
        ans.push_back(l);
        bool flag  =true;
        for (int i = 2; i <=n; i++)
        {
            ll x = l+((l%i)?(i-(l%i)):0);
            if(x<=r)ans.push_back(x);
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            for(auto it:ans)cout<<it<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
}
 