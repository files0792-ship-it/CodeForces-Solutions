#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(ll n){
    ll a = n;
    while(a>0){
        if(a%10 == 0)a = a/10;
        if(a%10 != 0){
            if(n%(a%10) != 0){
                a= a/10;
                return false;
            }
            else if(n%(a%10) == 0)a=a/10;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin>>n;
        stack<char> st;
        string s;
        cin>>s;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(st.empty()){
                if(c == ')'){
                    cnt++;
                    st.push(')');
                }
                else st.push('(');
 
            }
            else if(!st.empty()){
                if(st.top() == ')'){
                    if(c == '(')st.push(c);
                    else{
                        cnt++;
                        st.push(c);
                    }
                }
                else if(st.top() == '('){
                    if(c == ')')st.pop();
                    else st.push(c);
                }
            }
 
        }
        cout<<cnt<<endl;
        
    }
}