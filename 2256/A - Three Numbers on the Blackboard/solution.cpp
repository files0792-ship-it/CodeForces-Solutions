#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[2]>v[0]+v[1]) cout<<v[1]<<endl;
        else cout<<v[2] - v[0]<<endl;
    }
}