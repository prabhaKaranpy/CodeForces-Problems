#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        vector<ll> arr(n); 
        for(ll &it : arr) cin>>it; 
        // ll ans = 0; 
        vector<ll> factors; 
        for(ll i = 1LL; (i*i) <= n; i++){
            if(!(n % i)){
                factors.push_back(i); factors.push_back(n / i);  
            } 
        }  
        // sort(arr.begin(), arr.end()); 
        // vector<ll> pref(n); 
        // vector<ll> suf(n); 
        // pref[0] = arr[0]; 
        // suf[n-1] = arr[n-1]; 
        // for(int i = 1; i < n; i++){
        //     pref[i] = arr[i] + pref[i-1]; 
        // } 
        // for(int i = n-2; i >= 0; i--) suf[i] = arr[i] + suf[i+1]; 
        ll ans = 0; 
        for(ll &it : factors){ 
            ll maxi = 0, mini = 1e18; 
            for(ll i = 0; i < n; i+=it){
                ll temp = 0; 
                for(ll j = i; j < i+it; j++){
                    temp += arr[j]; 
                } 
                maxi = max(maxi, temp); mini = min(mini, temp); 
            }
            ans = max(ans, (maxi - mini));   
        } 
        cout<<ans<<endl; 
    }
}