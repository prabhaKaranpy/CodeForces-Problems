#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    // int T; cin>>T; 
    ll n, d; cin>>n>>d; 
    d += 1LL; 
    vector<ll> arr(n); 
    for(ll &it : arr) cin>>it; 
    sort(arr.rbegin(), arr.rend()); 
    ll r = n-1LL; 
    ll l = 0LL; 
    ll wins = 0; 
    while(l <= r){
        ll power = arr[l]; 
        ll count = d / power; 
        if(d % power) count += 1LL; 
        r -= count; 
        r += 1LL; 
        if(r >= l) wins += 1LL; 
        l += 1LL; 
    } 
    cout<<wins<<endl; 
}