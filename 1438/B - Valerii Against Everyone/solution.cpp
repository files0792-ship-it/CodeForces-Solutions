#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> vec;
        for (int i = 0; i < n; i++)
        {   
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if(vec[i] == vec[i+1]) {
                flag = false;
                break;
            }
            
        }
        if(!flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;        
        
    }
}