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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> b(n); for(int &it : b) cin>>it; 
        sort(arr.begin(), arr.end()); 
        sort(b.rbegin(), b.rend()); 
        ll ans = 1LL;  
        for(int i = 0; i < n; i++){
            auto ub = upper_bound(arr.begin(), arr.end(), b[i]) - arr.begin(); 
            int ways = n - ub; 
            ans *= max((ll)(ways-i), 0LL); 
            ans %= (ll)(1e9+7); 
        } 
        cout<<ans<<endl; 
    }
}