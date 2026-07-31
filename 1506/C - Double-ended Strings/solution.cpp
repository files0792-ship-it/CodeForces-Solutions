#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string a,b;
        cin>>a>>b;
        int mx = 0;
        int A = a.size();
        int B = b.size();
        for (int i = 0; i < A; i++)
        {
            for (int j = i; j < A; j++)
            {
                string s;
                s = a.substr(i,j-i+1);
                if(b.find(s)!=string::npos) mx = max(mx,(int)s.size());
            }
            
        }
    cout<<A+B-(2*mx)<<endl;
}
}