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
        ll n; cin>>n; 
        vector<ll> arr(n); for(ll &it : arr) cin>>it; 
        vector<ll> ans(n); ans[0] = 1; 
        ll c = 2; 
        ll temp = 2; 
        for(ll i = 1; i < n; i++){
            ll inc = arr[i] - arr[i-1]; 
            if(inc == c){
                ans[i] = temp; 
                temp ++; 
            }
            else if(inc == 1LL){
                ans[i] = ans[i-1]; 
            } 
            else{
                ans[i] = ans[i-inc]; 
            }
            c ++; 
        }
        for(auto &it : ans){
            cout<<it<<" "; 
        } cout<<endl; 
    }
}