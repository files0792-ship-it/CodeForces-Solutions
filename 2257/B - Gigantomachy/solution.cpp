#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,m;cin>>n>>m;
        vector<int> a(n),b(m);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
 
        int a1 = a[0] +n- 1;
        int b1 = b[0] +m - 1;
 
        if(a1 >= b1)cout<<1<<endl;
        else cout<<2<<endl;
    }
}