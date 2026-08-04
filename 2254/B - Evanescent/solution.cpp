#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        bool flag = true;
        for (int i = 1; i < n-1; i++)
        {
            if(s[i-1] == s[i+1] && s[i] != s[i-1]){
                s.erase(s.begin() + i);
                flag = false;
                break;
            }
        }
        if(flag){
            for (int i = 1; i < n-1; i++)
            {
                if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                    s.erase(s.begin() + i);
                    flag = false;
                    break;
                }
            }
        }
        if(flag)s.erase(s.begin()+1);
        stack<char>st;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(st.empty()){
                st.push(c);
                ans++;
            }
            else if(st.top()!=c){
                st.push(c);
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}