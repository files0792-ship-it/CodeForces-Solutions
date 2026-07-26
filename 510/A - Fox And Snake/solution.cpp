#include <bits/stdc++.h>
using namespace std;
    vector<vector<char>> fox_and_snake(int n, int m){
    vector<vector<char>> ans(n, vector<char>(m));
 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = '#';
            }
        }
        else {
            for (int j = 0; j < m; j++) {
                ans[i][j] = '.';
            }
 
            if (i % 4 == 1) {
                ans[i][m - 1] = '#'; 
            } else {
                ans[i][0] = '#';  
            }
        }
    }
 
    return ans;
}
 
int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>> ans = fox_and_snake(n,m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
 
    return 0;
}