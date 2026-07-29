#include <bits/stdc++.h>
using namespace std;
 
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,r,b;
        cin>>n>>r>>b;
        string s;
        int a = r/(b+1);
        int c = r%(b+1);
        while (r>0)
        {
            if(r>0){
                for (int i = 0; i < a; i++)
                {
                    s.push_back('R');
                }
                r-=a;
            }
            if(r>0 && c>0){
                    s.push_back('R');
                    r-=1;
                    c--;
            }
            if(b>0){
                s.push_back('B');
                b--;
            }
        }
        cout<<s<<endl;
        
    }
}