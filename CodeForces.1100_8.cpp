#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        ll n, k, a, b; cin>>n>>k>>a>>b; 
        vector<pair<ll, ll>> cities; 
        for(int i = 0; i < n; i++){
            ll x, y; cin>>x>>y; 
            cities.pb({x, y}); 
        } 
        ll ans = 1e18; 
        ans = min(ans, (abs(cities[a-1].first - cities[b-1].first) + abs(cities[b-1].second - cities[a-1].second))); 
        if(k > 0 && a > k && b > k){
            ll aClosest = 1e18, bClosest = 1e18; 
            for(int i = 0; i < k; i++){
                aClosest = min(aClosest, abs(cities[a-1].first - cities[i].first) + abs(cities[a-1].second - cities[i].second)); 
                bClosest = min(bClosest, abs(cities[b-1].first - cities[i].first) + abs(cities[b-1].second - cities[i].second)); 
            }
            ans = min(ans, (aClosest + bClosest)); 
        } 
        if(a <= k && b <= k) ans = 0; 
        else{
            if(b <= k){
                ll aClosest = 1e18; 
                for(int i = 0; i < k; i++){
                    aClosest = min(aClosest, abs(cities[a-1].first - cities[i].first) + abs(cities[a-1].second - cities[i].second)); 
                } 
                ans = min(ans, aClosest); 
            } 
            else if(a <= k){
                ll bClosest = 1e18; 
                for(int i = 0; i < k; i++){
                    bClosest = min(bClosest, abs(cities[b-1].first - cities[i].first) + abs(cities[b-1].second - cities[i].second)); 
                } 
                ans = min(ans, bClosest); 
            }
        }
        cout<<ans<<endl; 
    }
}