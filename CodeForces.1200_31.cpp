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
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        vector<ll> count(32); 
        for(int &it : arr){
            int last = 0; 
            for(int i = 0; i < 32; i++){
                if(it & (1<<i)){
                    last = i; 
                } 
            } 
            count[last] ++; 
        } 
        ll ans = 0LL; 
        for(ll &it : count){
            ans += ((it * (it-1LL))/2LL); 
        } 
        cout<<ans<<endl; 
    }
}