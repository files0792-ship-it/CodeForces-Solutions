#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        if(n%2==0){
            cout<<2<<"
";
            cout<<1<<" "<<n<<"
";
            cout<<1<<" "<<n<<"
";
        }
        else{
            cout<<4<<"
";
            cout<<1<<" "<<2<<"
";
            cout<<1<<" "<<2<<"
";
            cout<<2<<" "<<n<<"
";
            cout<<2<<" "<<n<<"
";
        }
    }
 
    return 0;
}