#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,k,i;
        cin>>n>>k;
 
        string s;
        cin>>s;
 
        map<char,int> m;
 
        for(char c:s)
            m[c]++;
 
        int odd=0;
 
        for(auto x:m){
            if(x.second%2)
                odd++;
        }
 
        if(odd<=k+1)
            cout<<"YES
";
        else
            cout<<"NO
";
    }
}