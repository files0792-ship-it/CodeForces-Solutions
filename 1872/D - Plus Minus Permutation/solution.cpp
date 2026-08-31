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
       ll n,x,y;cin>>n>>x>>y;
       ll lcm = x*y/(__gcd(x,y));
       ll X = (n/x) - (n/lcm);
       ll Y = (n/y) - (n/lcm);
       cout<<(X*(2*n-X+1)/2) - (Y*(Y+1)/2)<<endl;
    }
     
  }