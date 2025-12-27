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
        ll r, x, d, n; cin>>r>>x>>d>>n; 
        string s; cin>>s; 
        int count = 0; 
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                r -= d; 
                count ++; 
            } 
            else{
                if(r < x){
                    count ++; 
                    r -= d; 
                } 
            }
        } 
        cout<<count<<endl; 
    }
}