#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
            cin >> v[i];
 
        int cnt = 0;
        while (1)
        {
            sort(v.begin(), v.end());
            if (v[0] == v[1]||v[1] == v[2]) break;
            v[2]--;
            v[0]++;
            cnt++;
        }
        cout << cnt << "
";
    }
}