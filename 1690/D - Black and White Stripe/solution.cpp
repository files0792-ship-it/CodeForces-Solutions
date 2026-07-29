#include <bits/stdc++.h>
using namespace std;
 
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> v;
        int prf[n+1];
        for (int i = 0; i <n; i++)
        {   if(s[i] == 'B')v.push_back(1);
            else v.push_back(0);
        }
        prf[0] = 0;
        for (int i = 1; i <=n; i++)
        {
            prf[i] = prf[i-1]+ v[i-1];
        }
 
        int ans = INT_MAX; 
 
            for (int i = k; i <=n; i++)
            {
                ans = min(ans,k - prf[i] + prf[i-k]);
            }
            cout<<ans<<endl;
        
    }
}