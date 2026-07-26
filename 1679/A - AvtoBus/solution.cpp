#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 
    while (t--)
    {
        ll n;
        cin>>n;
        if(n == 2) cout<<-1<<endl;
        else if(n%2!=0) cout<<-1<<endl;
        else if(n%4==0 && n%6==0) cout<<n/6 <<" "<<n/4<<endl;
        else if(n%6==0 && n%4!=0) cout<<n/6 <<" "<<n/4<<endl;
        else if(n%6!=0 && n%4==0) cout<<(n/6) + 1 <<" "<<n/4<<endl;
        else if((n+2)%4 == 0)     cout<<(n/6) + 1 <<" "<<n/4<<endl;
    }
 
}