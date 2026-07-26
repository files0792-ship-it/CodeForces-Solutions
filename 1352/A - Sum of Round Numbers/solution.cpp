        #include <bits/stdc++.h>
 using namespace std;
 
 
    
    int noofzeroes(int n){
        int count = 0;
        while (n!=0)
        {
            if(n%10 != 0) count++;
            n = n/10;
        }
        return count;
    }
    
    int main(){
        int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    int count = 0;
    cout<<noofzeroes(n)<<endl;
    while(n!=0){
        int re = n%10;
        if(re == 0) {
            count++;
            n = n/10;
            continue;
        }
        else{
            cout<<re*pow(10,count)<<" ";
            count++;
            n = n/10;
            
        }
    }
}
return 0;
}