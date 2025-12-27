#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
ll f(ll copy){
    ll digits = 1; 
    while(copy){
        digits *= 10LL; 
        copy /= 10LL; 
    } 
    return digits; 
}
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        // ll digits = 1; 
        // ll copy = n; 
        // while(copy){
        //     digits *= 10LL; 
        //     copy /= 10LL; 
        // } 
        // ll x = n * digits; 
        // x -= n; 
        // ll end = 1e8;
        // for(ll i = 1LL; i <= end; i++){
        //     if(!(((n * f(i)) - n) % (n+i))){
        //         cout<<i<<endl; 
        //         break; 
        //     } 
        // } 
        ll ans = (9LL * n) - n; 
        cout<<ans<<endl; 
        // cout<<stoll(to_string(n)+to_string(ans)) % (n + ans)<<endl; 
    }
}