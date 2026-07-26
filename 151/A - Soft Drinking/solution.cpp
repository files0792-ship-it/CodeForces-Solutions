 #include <bits/stdc++.h>
using namespace std;
 
int main(){
 
 int n, k, l, c, d, p, nl, np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 int a = min((k*l)/nl,c*d);
 int b = min(a,p/np);
 cout<<b/n;
 
}