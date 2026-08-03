#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    
        int n;
        cin>>n;
        string s;
        int I,J;
        cin>>s;
        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i] > s[i+1]){
                flag = true;
                    I = i+1;
                    J = i+2;
                    cout<<"YES"<<endl<<I<<" "<<J<<endl;
                    break;
            }
        }
        if(!flag)cout<<"NO"<<endl;
        
        
        
    }