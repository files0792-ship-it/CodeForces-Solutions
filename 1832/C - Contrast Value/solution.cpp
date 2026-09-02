#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(n);
 
        for (int &x :a)cin>>x;
 
        vector<int> b;
 
        for (int x:a)
        {
            if (b.empty()||b.back()!=x)b.push_back(x);
        }
        vector<int> ans;
        ans.push_back(b[0]);
 
        for (int i = 1;i < b.size() - 1;i++)
        {
            if ((b[i] > b[i - 1] && b[i] > b[i + 1]) ||
                (b[i] < b[i - 1] && b[i] < b[i + 1]))ans.push_back(b[i]);
        }
        if (b.size() > 1)ans.push_back(b.back());
        cout << ans.size() <<endl;
    }
}