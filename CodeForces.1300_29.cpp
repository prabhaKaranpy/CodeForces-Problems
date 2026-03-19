#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
pair<int, int> bfs(int node, vector<int> arr[], int &n){
    vector<int> visited((n+1)); 
    queue<pair<int, int>> qu; 
    qu.push({node, 0}); 
    int color1 = 0, color2 = 0; 
    visited[node] = 1; 
    while(!qu.empty()){
        auto [cur, color] = qu.front(); qu.pop(); 
        if(color) color1 ++; 
        else color2 ++; 
        for(auto &it : arr[cur]){
            if(!visited[it]){
                qu.push({it, (color^1)}); 
                visited[it] = 1; 
            }
        }
    } 
    // cout<<color1<<" "<<color2<<endl; 
    return {color1, color2}; 
}
signed main(void){
    prabha;
    // int T; cin>>T; 
    // while(T--){
        int n; cin>>n; 
        vector<pair<int, int>> edges; 
        for(int i = 0; i < (n-1); i++){
            int u, v; cin>>u>>v; 
            edges.pb({u, v}); 
        } 
        // set<int> stt[(n+1)]; 
        vector<int> arr[(n+1)]; 
        for(auto &it : edges){
            arr[it.first].pb(it.second); 
            arr[it.second].pb(it.first); 
        }
        // for(int i = 1; i <= n; i++){
        //     for(auto &it : arr[i]) stt[i].insert(it); 
        // } 
        auto [color1, color2] = bfs(1, arr, n); 
        // int color1 = c.first, color2 =c.second; 
        int ans = (color1 * color2) - (n-1); 
        cout<<ans<<endl; 
    // } 
}