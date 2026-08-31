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
       int n;cin>>n;vector<ll>v(n);
       for(int i = 0; i < n; i++){
         cin>>v[i];
       }
       for(ll div = 2;;div*=2){
        set<ll>st;
        for (int i = 0; i < n; i++)
        {
          st.insert(v[i]%div);
        }
        if(st.size() == 2){
          cout<<div<<endl;
          break;
        }
        else st.clear();
       }
       
    }
     
  }