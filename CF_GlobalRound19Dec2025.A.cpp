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
        int l, a, b; cin>>l>>a>>b; 
        int ans = a; 
        int t = 100000; 
        int cur = a; 
        while(t--){
            cur += b; cur %= l; 
            ans = max(ans, cur); 
        } 
        cout<<ans<<endl; 
    }
}