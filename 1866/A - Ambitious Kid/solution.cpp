#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
   int n;cin>>n;
   int mini = INT_MAX;
   for (int i = 0; i < n; i++)
   {
    int x;cin>>x;
    mini = min(mini,abs(x));
   }
   cout<<mini<<endl;
}