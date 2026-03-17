#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
int bfs(int i, vector<int> arr[], vector<int> &visited){
    queue<pair<int, int>> qu; 
    qu.push({i, 1}); 
    visited[i] = 1; 
    int color1 = 0, color2 = 0; 
    color1 ++; 
    int found = 0; 
    while(!qu.empty()){
        auto [cur, color] = qu.front(); qu.pop(); 
        for(auto &it : arr[cur]){
            if(!visited[it]){
                qu.push({it, (color == 1 ? 2 : 1)}); 
                visited[it] = (color == 1 ? 2 : 1); 
                if(color == 1) color2 ++; 
                else color1 ++; 
            } 
            else{
                if(color == visited[it]){
                    found = 1; 
                }
            }
        }
    } 
    if(found) return 0; 
    return max(color1, color2); 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<int> arr[(n+1)]; 
        for(int i =0; i < m; i++){
            int u, v; cin>>u>>v; 
            arr[u].pb(v); arr[v].pb(u); 
        } 
        vector<pair<int, int>> edges; 
        vector<int> directed; 
        vector<int> visited((n+1)); 
        int count = 0; 
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                if(arr[i].size() == 0){
                    count ++; 
                    visited[i] = 1; 
                    continue; 
                } 
                count += bfs(i, arr, visited); 
            } 
        } 
        cout<<count<<endl; 
    }
}