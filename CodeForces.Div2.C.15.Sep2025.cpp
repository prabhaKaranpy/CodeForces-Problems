#include<bits/stdc++.h>
#define pb push_back
using namespace std; 
using ll = long long; 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
signed main(void){
    prabha; 
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> a(n), b(n); 
        for(int &it : a) cin>>it; 
        for(int &it : b) cin>>it; 
        ll ans = 2LL; 
        for(int i = 0; i < n-1; i++){
            if(max(a[i], b[i]) <= min(a[i+1], b[i+1])){
                ans *= 2LL; 
                ans %= mod; 
            }  
        } 
        cout<<ans<<endl; 
    }
}