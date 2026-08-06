#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
            sum+=x;
        }
        int mx=0,x=0;
        for(auto i:m)
        {
            if(i.second>mx)
            {
                mx=i.second;
                x=i.first;
            }
        }
        int other=n-mx;
        if(mx<=other+2)cout<<sum<<endl;
        else cout<<sum-(mx-other-2)*x<<endl;
    }
}