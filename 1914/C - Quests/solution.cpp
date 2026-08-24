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
           int n,k;cin>>n>>k;
           vector<int> a(n+1),b(n+1),p(n+1);
           a[0] = 0;b[0] = 0;
           p[0] = 0;
            for (int i = 1; i <= n; i++)
            {
                cin>>a[i];
                p[i]= p[i-1] +a[i];
            }
            int cmp = 0;
            for (int i = 1; i <=n; i++)
            {
                int x;cin>>x;
                cmp = max(cmp,x);
                b[i] = cmp;
            }
            int ans = 0;
            if(n<k){
                for (int i = 1; i <=n; i++)
            {
                ans = max(ans,p[i] + (b[i]*(k-i)));
            }
            }
            else {
                for (int i = 1; i <=k; i++)
            {
                ans = max(ans,p[i] + (b[i]*(k-i)));
            }
            }
            cout<<ans<<endl;
        }
    }