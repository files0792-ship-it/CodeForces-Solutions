#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
 
int main() 
{ 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t;cin >> t;
    while (t--) 
    { 
        int n;cin>>n;vector<int>a(n*(n-1)/2);
        for(int i = 0; i < (n*(n-1))/2; i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<int> ans;int idx = 0;
        for(int i = 0; i < n - 1; i++)
        {
            ans.push_back(a[idx]);
            idx+=n-i-1;
        }
        ans.push_back(a.back());
        for(int i = 0; i < n; i++)cout<<ans[i]<<" ";
        cout<<endl;
    } 
      
} 