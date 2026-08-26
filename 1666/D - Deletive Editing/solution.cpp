#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while(n--){
        string s, t;
        cin >>s>>t;
        if(t.length()>s.length()){
            cout << "NO
";
            continue;
        }
        vector<int> freq(26, 0);
        for(char c : t){
            freq[c - 'A']++;
        }
 
        for(int i = s.length() - 1; i >= 0; i--){
            int idx = s[i] - 'A';
            if(freq[idx] > 0)freq[idx]--;
            else s[i] = '.';
        }
 
        string f = "";
        for(char c : s){
            if(c != '.')f += c;
        }
        if(f == t)cout <<"YES
";
        else cout <<"NO
";
    }
}