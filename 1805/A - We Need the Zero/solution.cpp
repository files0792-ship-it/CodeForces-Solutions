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
       ll n;cin>>n;ll ans=0;
       for (int i = 0; i < n; i++)
       {
        int x;cin>>x;
        ans^=x;
       }
       if(n%2==0){
        if(ans==0)cout<<3<<endl;
        else cout<<-1<<endl;
       }
       else{
        cout<<ans<<endl;
       }
    }
     
    }