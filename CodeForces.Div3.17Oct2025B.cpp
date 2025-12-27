#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        string s; cin>>s; 
        int summ = count(s.begin(), s.end(), '0'); 
        if(summ == 0 || summ == n){
            cout<<0<<endl; 
            cout<<endl; 
        } 
        else{
            cout<<summ<<endl; 
            for(int i =0; i < n;i++){
                if(s[i] == '0'){
                    cout<<i+1<<" "; 
                } 
            }
            cout<<endl; 
        }
    }
}