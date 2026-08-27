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
       int a,b,c;cin>>a>>b>>c;
       bool flag  =false;
       if(2*b -c>0){
        if((2*b -c)%a==0)flag = true;
       }
       if((c+a)%2==0){
        if(((c+a)/2)%b==0)flag= true;
       }
       if(2*b-a>0){
        if((2*b-a)%c==0)flag = true;
       }
       if(flag)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}