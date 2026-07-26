#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
        if(n==2)cout<<1<<" "<<1<<endl;
        else if(n==3) cout<<1<<" "<<2<<endl;
        else{
            bool found = false;
            for (int i = 2; i <=sqrt(n); i++)
            {
                if(n%i == 0){
                    cout<<(n/i)<<" "<<n -(n/i)<<endl;
                    found = true;
                    break;
                }
            }
            if(!found)cout<<1<<" "<<n-1<<endl;
        }
}
    
    }