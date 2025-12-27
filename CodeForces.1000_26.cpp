#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        ll x, y, k; cin>>x>>y>>k; 
        ll count = 1LL; 
        ll ans = k; 
        ll sticksRequired = (y * k) -1LL; 
        ll operations = sticksRequired / (x-1LL); 
        if(sticksRequired % (x-1LL)){
            operations += 1LL; 
        } 
        ans += operations; 
        ll currentSticks = ((operations * (x-1LL))+1LL) - (sticksRequired+1LL); 
        if(currentSticks == 0){
            ans ++; 
            currentSticks = (x-1LL); 
        }
        ll requiredSticks = k-currentSticks; 
        if(requiredSticks <= 0){
            cout<<ans<<endl; 
        } 
        else{
            ans += (requiredSticks / (x-1LL)); 
            if(requiredSticks % (x-1LL)){
                ans += 1LL; 
            } 
            cout<<ans<<endl; 
        }
        
        
    }
}
