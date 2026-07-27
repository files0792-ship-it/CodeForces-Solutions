#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    string s;
    int n;
    char c;
    cin>>n >> c>>s;
    s = s+s;
    int nextG = -1, dist = 0;
    for (int i = (2*n)-1; i >=0; i--)
    {
        if(s[i] == 'g')nextG = i;
        if(s[i] == c && nextG!=-1)dist = max(dist,nextG - i);
    }
    
    cout<<dist<<endl;
 
}
    
    }           