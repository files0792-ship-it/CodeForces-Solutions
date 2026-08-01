#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
    int a,b;
    cin>>a>>b;
    vector<int> ans;
    int extra = 0;
    if(b==1){
        extra = 1;
        b++;
    }
 
    for (int i = 0; i < 30; i++)
    {   
        int x = a;
        int y = b+i;
        int cnt = extra+i;
        while (x!=0)
        {
            x = x/y;
            cnt++;
        }
        ans.push_back(cnt);
    }
    cout<<*min_element(ans.begin(),ans.end())<<"
";
   }   
}