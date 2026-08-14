#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
int t;
cin >> t;
 
while (t--) {
   int n ;cin>>n;
   vector<int>v(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin>>v[i];
    }
    cout<<-1*accumulate(v.begin(),v.end(),0)<<endl;
    
}
 
 
}