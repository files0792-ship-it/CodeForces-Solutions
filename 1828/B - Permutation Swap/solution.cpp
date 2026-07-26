#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<int> answer;
        for (int i = 0; i < n; i++)
        {
            answer.push_back(abs(arr[i] - i - 1));
        }
        
        answer.erase(remove(answer.begin(),answer.end(),0),answer.end());
        
        int gcd = answer[0];
        for (int i = 1; i < n; i++)
        {
            gcd = __gcd(gcd,answer[i]);
        }
        cout<<gcd<<endl;
        
    }
 
}