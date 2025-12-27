#include<bits/stdc++.h>
#define ll long long 
#define input for(auto &it : a) cin>>it 
#define input2 for(auto &it : b) cin>>it 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        vector<ll> a(n); 
        // for(auto &it : arr) cin>>it; 
        input; 
        vector<pair<ll, ll>> arr; 
        for(int i = 0; i < n; i++) arr.push_back({a[i], i}); 
        sort(arr.begin(), arr.end()); 
        vector<ll> pref(n); pref[0] = arr[0].first; 
        for(ll i = 1; i < n; i++) pref[i] = arr[i].first + pref[i-1]; 
        vector<ll> hash(n, n-1LL); 
        for(ll i = 0; i < n-1LL; i++){
            if(pref[i] < arr[i+1LL].first){
                hash[i] = i; 
            } 
        } 
        ll i = n-1LL; 
        while(i >= 0LL){
            if(hash[i] != n-1LL){
                ll j = i-1; 
                while(hash[j] == n-1LL){
                    hash[j] = hash[i]; 
                    j--; 
                } 
                i = j; 
            }
            else i--; 
        } 
        // for(ll &it : hash) cout<<it<<"  "; 
        // cout<<endl; 
        vector<ll> ans(n); 
        for(int i = 0; i < n; i++){
            ll compute = hash[i]; 
            ans[arr[i].second] = compute; 
        } 
        for(ll &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}