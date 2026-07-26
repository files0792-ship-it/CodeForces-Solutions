#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
 
vector<vector<int>> mat2(5,vector<int>(5));
        int a,b;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin>>mat2[i][j];
                if(mat2[i][j] == 1) 
                {
                    a = i+1;
                    b = j+1;
                }
 
            }
            
        }
 
        cout<<abs(3-a) + abs(3-b);
    }