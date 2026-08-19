#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(vector<int> v,int x){
    int n = v.size();
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
       if(v[i]!=x)b.push_back(v[i]);
    }
    int m = b.size();
    for (int i = 0; i < m; i++)
    {
        if(b[i]!=b[m-i-1])return false;
    }
    return true;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin >> t;
 
    while (t--) {
        int n;cin>>n;
 
        vector<int> a(n);
        map<int,int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
		if (a[i]!=a[n-i-1]) {
			if(check(a,a[i])||check(a,a[n-i-1]))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            flag = false;
            break;
		}
	}
	    if(flag)cout<<"YES"<<endl; 
}
 
}