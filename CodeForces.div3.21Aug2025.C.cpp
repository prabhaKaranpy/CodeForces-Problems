#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
ll cost(ll x){
    return pow(3, (x+1)) + (x * (pow(3, (x-1)))); 
}
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        ll ans = 0; 
        ll temp = 0; 
        while(1){
            ll d = pow(3, temp); 
            if(d > n){
                ll x = pow(3, temp-1); 
                ans += ((n/x) * cost(temp-1LL)); 
                if(n % x){
                    n = (n % x); 
                    temp = 0; 
                }
                else{
                    break; 
                }
            }
            else temp ++; 
        } 
        cout<<ans<<endl; 
    }
}