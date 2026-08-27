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
       int n;cin>>n;
       vector<int>v(n);
       for (int i = 0; i < n; i++)
       {
        cin>>v[i];
       }
 
       sort(v.begin(),v.end());
       int mx = 1,cnt = 1;
 
       for (int i = 1; i < n; i++)
       {
        if (v[i] == v[i-1])cnt++;
        else cnt = 1;
        mx = max(mx,cnt);
       }
 
       int ans = 0;
       while (mx < n)
       {
        ans++;
        int add = min(mx,n-mx);
        ans += add;
        mx += add;
       }
       cout<<ans<<endl;
 
    }
}