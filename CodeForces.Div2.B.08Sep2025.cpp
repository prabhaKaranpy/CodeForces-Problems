#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        ll n, m; cin>>n>>m; 
        vector<ll> arr(n); 
        for(ll &it : arr) cin>>it; 
        sort(arr.rbegin(), arr.rend()); 
        ll ans = 0LL; 
        ll end = min(m, n); 
        for(ll i = 0LL; i < end; i++){
            ans += (arr[i] * m); 
            m -= 1LL; 
            // cout<<"M : "<<m<<endl; 
        } 
        // if(m > 0LL){
        //     cout<<"ans : "<<ans<<endl; 
        //     ans += (m * arr[n-1]); 
        //     cout<<"ans : "<<ans<<endl; 
        // } 
        cout<<ans<<endl; 
    }
}