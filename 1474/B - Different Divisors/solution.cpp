#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(int n){
    
    bool flag = true;
    if(n==1) return false;
    else if(n==2)return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) flag = false;
    }
    return flag;
}
 
int near_prime(int n){
    if(prime(n) == 1)return n;
    else{
        for (int  i = 1; i <=1e3; i++)
        {
            if(prime(n+i) == 1) return n+i;
        }
        
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
    int d;
    cin>>d;
 
    int p,q;
    p = 1+d;
    if(prime(p) == 0)p = near_prime(p);
    q = p+d;
    if(prime(q) == 0)q = near_prime(q);
    cout<<p*q<<endl;
}
 
}