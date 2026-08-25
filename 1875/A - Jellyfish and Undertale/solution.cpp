    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;cin >> t;
        while (t--)
        {
           ll a,b,n;cin>>a>>b>>n;
           ll ans = b;
           for (int i = 1; i <=n; i++)
           {
            ll x;cin>>x;
            ans+=min(x,a-1);
           }
           cout<<ans<<endl;
        }
    }