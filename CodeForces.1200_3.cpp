#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
ll gcd(ll x, ll y){
    if(y == 0) return x; 
    return gcd(y, (x % y)); 
}
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n, x, y; cin>>n>>x>>y; 
        vector<ll> xDivisors; 
        vector<ll> yDivisors; 
        ll xTotal = n / x; 
        ll yTotal = n / y; 
        ll common = 0; 
        if(gcd(x, y) == x){
            common = n / y; 
            xTotal -= common; 
            yTotal -= common; 
            
        } 
        else if(gcd(x, y) == y){
            common = n / x; 
            xTotal -= common; 
            yTotal -= common; 
        } 
        else if(gcd(x, y) == 1){
            common = n / (x * y); 
            xTotal -= common; 
            yTotal -= common;    
        } 
        else {
            // just simple, it's all about lcm(x, y)! 
            ll lcm = (x * y) / gcd(x, y); 
            common = n / lcm; 
            xTotal -= common; 
            yTotal -= common; 
        }
        ll ans = ((n * (n+1LL)) / 2LL) - (((n-xTotal) * ((n-xTotal)+1LL)) / 2LL) - ((yTotal * (yTotal+1LL)) / 2LL); 
        cout<<ans<<endl; 
    }
}