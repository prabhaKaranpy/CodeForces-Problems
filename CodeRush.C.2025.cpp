#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    ll n, m, k; cin>>n>>m>>k; 
    vector<pair<ll, ll>> graph[n+1]; 
    for(int i = 0; i < m; i++){
        ll u, v, t; cin>>u>>v>>t; 
        if(u == v) continue; 
        graph[u].push_back({v, t}); 
        graph[v].push_back({u, t}); 
    } 
    vector<pair<ll, ll>> times; 
    for(int i = 0; i < k; i++){
        ll u,t; cin>>u>>t; 
        times.push_back({t, u}); 
    } 
    sort(times.begin(), times.end()); 
    vector<ll> distance(n+1, 1e18); 
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; 
    pq.push({0, 1}); 
    distance[1] = 0; 
    while(!pq.empty()){
        ll u = pq.top().second; pq.pop(); 
        for(auto &it : graph[u]){
            ll v = it.first; 
            ll t = it.second; 
            if(distance[u] + t < distance[v]){ 
                distance[v] = distance[u] + t; 
                pq.push({distance[v], v}); 
            } 
        } 
    } 
    int found = 0; 
    ll ans = -1LL; 
    for(auto &it : times){
        if(distance[it.second] <= it.first){
            ans = it.first; 
            found = 1; 
            break; 
        } 
    }    
    // for(ll &it : distance) cout<<it<<"  "; 
    // for(auto &it : times) cout<<it.first <<" : "<<it.second<<endl; 
    // cout<<endl; 
    if(found) cout<<ans<<endl; 
    else cout<<-1<<endl; 
}