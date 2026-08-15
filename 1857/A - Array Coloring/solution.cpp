#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
    int n;cin>>n;vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    if(accumulate(v.begin(),v.end(),0) %2 == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
}