#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
constexpr ll MOD = 1e9+7LL; 
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        cout<<(((((2022LL) * (((n * (n+1)) % MOD) * ((4LL * n) - 1LL) % MOD)))/ 6LL) % MOD)<<endl; 
        // the above is derived from summation : 1->n (i*i) + summation : 1->n-1 (i*(i+1)); 
        // (i) : 1->n : (n * (n+1)) /2 , (i*i) : 1-> n : (n * (n+1) * (2n + 1)) / 6 ; 
    }
}