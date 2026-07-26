#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int a,b;
        cin>>a>>b;
 
        int xk,yk;
        cin>>xk>>yk;
 
        int xq,yq;
        cin>>xq>>yq;
 
        set<pair<int,int>> king,queen;
 
        for(int sx:{-1,1}){
            for(int sy:{-1,1}){
 
                king.insert({xk+sx*a,yk+sy*b});
                king.insert({xk+sx*b,yk+sy*a});
 
                queen.insert({xq+sx*a,yq+sy*b});
                queen.insert({xq+sx*b,yq+sy*a});
            }
        }
 
        int ans=0;
 
        for(auto p:king){
            if(queen.count(p))
                ans++;
        }
 
        cout<<ans<<"
";
    }
}