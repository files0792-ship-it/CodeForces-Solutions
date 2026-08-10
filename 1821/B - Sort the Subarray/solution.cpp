#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
int t;
cin >> t;
 
while (t--) {
    int n;
    cin>>n;
   vector<pair<int,int>>a(n+1),b(n+1),c(n+1);
   for (int i = 1; i <= n; i++)
   {
    int x;
    cin>>x;
    a[i] = {x,i};
   }
   for (int i = 1; i <= n; i++)
   {
    int x;
    cin>>x;
    b[i] = {x,i};
   }
   for (int i = 1; i <=n; i++)
   {
    c[i] = b[i];
   }
   
 
   sort(a.begin(),a.end());
   sort(c.begin(),c.end());
   int maxi = abs(a[1].second - c[1].second);
   int A = min(a[1].second,c[1].second),B = max(a[1].second,c[1].second);
   for (int i = 2; i <= n; i++)
   {
    if(abs(a[i].second - c[i].second) >maxi){
        maxi = abs(a[i].second - c[i].second);
        A = min(a[i].second,c[i].second);
        B = max(a[i].second,c[i].second);
    }
   }
   for (int i = A; i >1; i--)
   {
    if(b[i].first<b[i-1].first)break;
    else if(b[i].first>=b[i-1].first)A--;
   }
   for (int i =B; i <n; i++)
   {
    if(b[i].first>b[i+1].first)break;
    else if(b[i].first<=b[i+1].first)B++;
   }
 
   cout<<A<<" "<<B<<endl;
}
 
 
}