#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(ll n){
    ll a = n;
    while(a>0){
        if(a%10 == 0)a = a/10;
        if(a%10 != 0){
            if(n%(a%10) != 0){
                a= a/10;
                return false;
            }
            else if(n%(a%10) == 0)a=a/10;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        ll n;
        cin>>n;
        
        for (int i = 0; i < n; i++)
        {
           if(solve(n+i) == 1){
            cout<<n+i<<endl; 
            break;
           }
        }
        
    }
}