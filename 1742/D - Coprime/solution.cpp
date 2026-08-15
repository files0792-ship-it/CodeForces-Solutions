#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
    ll n;cin>>n;
    vector<int> occ(1e3+1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        occ[x] = i;
    }
    int ans = -1;
    for (int i = 0; i <=1e3; i++)
    {
        for (int j = 0;j<= 1e3; j++)
        {
            if(occ[i] > 0 && occ[j]>0 && (__gcd(i,j)==1))ans = max(ans,occ[i]+occ[j]);
        }
        
    }
    cout<<ans<<endl;
 
}
}