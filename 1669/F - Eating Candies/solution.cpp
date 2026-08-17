#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;vector<int> v(n+1),p(n+1);
        p[0] = 0;
        for (int i = 1; i <=n; i++)
        {
            cin>>v[i];
            p[i] = p[i-1]+v[i];
        }
        int i = 1,j = n;
        int ans = 0;
        while (i<j)
        {
            if(p[i]<p[n]-p[j-1])i++;
            else if(p[i]>p[n]-p[j-1])j--;
            else {
                if(i!=j)ans = max(ans,i+n-j+1);
                i++;j--;
            }
        }
        cout<<ans<<endl;
        
    }
 
}
 