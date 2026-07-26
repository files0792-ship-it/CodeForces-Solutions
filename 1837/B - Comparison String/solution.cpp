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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1) {
            cout<<2<<endl;
            continue;
        }
        int len = 2;
        vector<int> ans;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i+1] == s[i])len++;
            else {
                ans.push_back(len);
                len = 2;
            }
        }
        ans.push_back(len);
        cout<< *max_element(ans.begin(),ans.end())<<endl;
 
 
        
    }
 
}