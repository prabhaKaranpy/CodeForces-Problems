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
        vector<ll> pref(n), suf(n); pref[0] = arr[0]; suf[n-1] = arr[n-1]; 
        for(int i = 1; i < n; i++) pref[i] = pref[i-1] + arr[i]; 
        for(int i = n-2; i >= 0; i--) suf[i] = suf[i+1] + arr[i]; 
        ll ans = 0LL; 
        for(int i = 0; i < n-1; i++){
            ans = max(ans, __gcd(pref[i], suf[i+1])); 
        } 
        cout<<ans<<endl; 
    }
}