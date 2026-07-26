#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll k,x,n;
        cin>>n>>k>>x;
        ll maxi = k*n -(k*(k-1)/2);
        ll mini = k*(k+1)/2;
        if(x>=mini && x <= maxi) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
}