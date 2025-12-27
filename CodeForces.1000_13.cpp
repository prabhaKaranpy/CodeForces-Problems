#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n, x; cin>>n>>x; 
        vector<ll> arr(n); 
        for(ll &it : arr) cin>>it; 
        ll count = 0; 
        ll maxi = arr[0], mini = arr[0]; 
        for(int i = 1; i < n; i++){
            mini = min(mini, arr[i]); 
            maxi = max(maxi, arr[i]); 
            if((maxi-mini) > (2LL*x)){
                count += 1LL; 
                mini = arr[i]; 
                maxi = arr[i]; 
            } 
        } 
        cout<<count<<endl; 
    }
}