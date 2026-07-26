#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,k;
        cin>>n>>k;
 
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        sort(a.begin(),a.end());
 
        vector<int>ans;
        int len=1;
 
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){
                len++;
            }
            else{
                ans.push_back(len);
                len=1;
            }
        }
 
        ans.push_back(len);
 
        cout<<n-*max_element(ans.begin(),ans.end())<<"
";
    }
}