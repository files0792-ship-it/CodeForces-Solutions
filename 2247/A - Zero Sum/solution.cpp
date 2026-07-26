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
        cin>>n;
        vector<int> v(n);
        int cntpos = 0,cntneg = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i] == -1)cntneg++;
            else cntpos++;
        }
        
        if(abs(cntpos - cntneg)%4 ==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl; 
        
 
        }
    }