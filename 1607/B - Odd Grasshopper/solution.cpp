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
       ll x,n,at;cin>>x>>n;
       if(x%2==0)at = 1;
       else at = -1;
       if(n%4==0)cout<<x<<endl;
       if(n%4==1)cout<<x-(at*n)<<endl;
       if(n%4==2)cout<<x+at<<endl;
       if(n%4==3)cout<<x+(at*(n+1))<<endl;
    }
}