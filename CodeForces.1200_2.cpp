#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        vector<ll> arr(n); 
        for(ll &it : arr) cin>>it; 
        ll ans = 0; 
        for(ll i = 1LL; i <= 60LL; i++){
            unordered_set<ll> distinctElements; 
            ll k = 1LL << i; 
            for(ll index = 0LL; index < n; index++){
                distinctElements.insert(arr[index] % k); 
            } 
            if(distinctElements.size() == 2){
                ans = k; break; 
            }
        } 
        cout<<ans<<endl; 
    }
}