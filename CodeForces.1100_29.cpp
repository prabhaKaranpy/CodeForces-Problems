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
        vector<ll> arr(n); for(ll &it : arr) cin>>it; 
        ll gcd1 = arr[0]; 
        ll gcd2 = arr[1]; 
        for(int i = 0; i < n; i+=2){
            gcd1 = __gcd(gcd1, arr[i]); 
        } 
        for(int i = 1; i < n; i+=2){
            gcd2 = __gcd(gcd2, arr[i]); 
        } 
        int found1 = 0, found2 = 0; 
        for(int i = 1; i < n; i+=2){
            if(!(arr[i] % gcd1)){
                found1 = 1; break; 
            } 
        } 
        for(int i = 0; i < n; i+=2){
            if(!(arr[i]%gcd2)){
                found2 = 1; break; 
            } 
        } 
        if(!found1 || !found2){
            if(!found1) cout<<gcd1<<endl; 
            else cout<<gcd2<<endl; 
        } 
        else cout<<0<<endl; 
    }
}