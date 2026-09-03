#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(m,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[j][i];
            }
        }
        ll ans=0;
        for(int i=0;i<m;i++){
            sort(v[i].begin(),v[i].end());
            for(int j=0;j<n;j++){
                ans+=1LL*v[i][j]*(2LL*j-n+1);
            }
        }
        cout<<ans<<endl;
    }
}