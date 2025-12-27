#include<bits/stdc++.h>                 // I SOLVED A (DIV.1 + DIV.2) D. PROBLEM UNDER 8 MINUTES :) 
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
        vector<ll> arr(n); for(auto &it : arr) cin>>it; 
        map<ll, ll> mp; 
        for(auto &it : arr) mp[it] ++; 
        vector<pair<ll, ll>> A; 
        for(auto &it : mp){
            A.push_back({it.second, it.first}); 
        } 
        sort(A.rbegin(), A.rend()); 
        ll a = 0, b = 0; 
        int game = 0; 
        for(auto &it : A){
            if((!game)){
                if(it.second &1){
                    a += ((it.first) *  (it.second / 2)); a += it.first; 
                    b += ((it.first) * (it.second / 2)); 
                    game ^= 1; 
                }
                else{
                    a += ((it.first) *  (it.second / 2)); 
                    b += ((it.first) * (it.second / 2)); 
                }
            } 
            else{
                if(it.second &1){
                    a += ((it.first) *  (it.second / 2)); 
                    b += ((it.first) * (it.second / 2)); b += it.first; 
                    game ^= 1; 
                }
                else{
                    a += ((it.first) *  (it.second / 2)); 
                    b += ((it.first) * (it.second / 2)); 
                }
            }
        } 
        cout<<a<<" "<<b<<endl; 
    }
}