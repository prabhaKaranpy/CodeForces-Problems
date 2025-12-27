#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){ 
        ll k, x; cin>>k>>x; 
        ll s1 = x, s2 = (1LL << (k+1LL))-x; 
        // cout<<s1<<"  "<<s2<<endl; 
        vector<ll> trace; 
        while(1){
            ll mini = min(s1, s2), maxi = max(s1, s2); 
            if(s1 == s2){
                break; 
            }
            if(mini == s2){
                trace.push_back(2); 
                s2 += mini; 
                s1 -= mini; 
            } 
            else{
                trace.push_back(1); 
                s1 += mini; 
                s2 -= mini; 
            } 
        } 
        cout<<trace.size()<<endl; 
        reverse(trace.begin(), trace.end()); 
        for(ll &it : trace) cout<<it<<" "; 
        cout<<endl; 
    }
}