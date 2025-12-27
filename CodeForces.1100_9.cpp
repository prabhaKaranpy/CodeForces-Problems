#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        ll n, c; cin>>n>>c; 
        vector<ll> arr(n); 
        for(ll &it : arr) cin>>it; 
        ll maxi = 0; 
        for(ll &it : arr) maxi = max(maxi, it); 
        ll l = 0, r = 1e9; 
        int found = 0; 
        ll ans = 0LL; 
        ll square = 0LL; 
        for(ll &it : arr) square += (it * it); 
        while(l <= r){
            ll w = (l + r) >> 1LL; 
            // cout<<"W : "<<w<<endl; 
            if(w > c){
                r = w-1; 
                continue; 
            } 
            
            ll total = 0LL; 
            int gotoo = 0; 
            for(int i = 0; i< n; i++){
                if((double)(total + ((arr[i] + (2 * w)) * (arr[i] + (2 * w)))) <= (double)(c)) total += ((arr[i] + (2 * w)) * (arr[i] + (2 * w))); 
                else{
                    r = w-1; 
                    gotoo = 1; 
                    break; 
                } 
            } 
            if(gotoo) continue; 
            if(total == c){
                found = 1; 
                ans = w; 
                break; 
            }
            else if(total > c){
                r = w-1; 
            } 
            else{
                l = w+1; 
            } 
        } 
        if(found){
            cout<<ans<<endl; 
        } 
        else{
            cout<<l-1<<endl; 
        }
    }
}