#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int second_min(vector<int> v){
    
    auto min_it = min_element(v.begin(), v.end());
    v.erase(min_it);
    int ans = *min_element(v.begin(), v.end());
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> vec(n);
        vector<int> sec_min; 
        vector<int> min_elements;  
        
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vec[i].resize(m); 
            for (int j = 0; j < m; j++)
            {
                cin >> vec[i][j];
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            int mini = *min_element(vec[i].begin(), vec[i].end());
            int sec_mini = second_min(vec[i]);
            min_elements.push_back(mini);
            sec_min.push_back(sec_mini);
        }
 
        long long sum_sec = accumulate(sec_min.begin(), sec_min.end(), 0LL);
        
        cout << sum_sec - *min_element(sec_min.begin(), sec_min.end()) + *min_element(min_elements.begin(), min_elements.end()) << "
";
    }
}