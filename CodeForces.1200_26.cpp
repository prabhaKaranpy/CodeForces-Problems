#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
constexpr ll MOD = 1e9+7; 
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        ll ans = 1LL; 
        for(int i = 1; i <= k; i++){
            ans *= (ll)(n); ans %= MOD; 
        } cout<<ans<<endl; 
    }
} 