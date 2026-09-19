#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
void dfs(int node, int parent, vector<int> arr[], map<pair<int, int>, int> &mp, int &maxi, int order/*, vector<int> &visited*/ ){
    // visited[node] = 1; 
    for(int &it : arr[node]){
        if(parent == 0){
            // if(!visited[it]){
                dfs(it, node, arr, mp, maxi, order/*, visited*/); 
            // }
        }
        else{
            if(it != parent){
                if(mp[{node, it}] < mp[{parent, node}]){
                    // order ++;      "HERE UPDATING THE order++ IS COMPLETELY WRONG", because in next loop, order value is updated... 
                    // cout<<"Node : "<<node<<" it : "<<it<<"  "<<mp[{node, it}]<<"  :  "<<mp[{parent, node}]<<endl; 
                    // maxi = max(maxi, order); 
                    maxi = max(maxi, order+1);  // THIS IS CORRECT, ONLY UPDATE FOR THIS DFS() CHILDS ...  
                    dfs(it, node, arr, mp, maxi, order+1/*, visited*/); 
                } 
                else if(mp[{node, it}] > mp[{parent, node}]){
                    dfs(it, node, arr, mp, maxi, order/*, visited*/); 
                } 
            } 
        } 
    } 
    return; 
} 
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<pair<int, int>> edges; 
        for(int i = 0; i < n-1; i++){
            int u, v; cin>>u>>v; edges.pb({u, v}); 
        } 
        vector<int> arr[n+1]; // arr is the graph...  
        map<pair<int, int>, int> mp; 
        int z =1 ; 
        for(auto &[u, v] : edges){ 
            arr[u].pb(v); arr[v].pb(u); 
            mp[{u,v}] = z; 
            mp[{v, u}] = z++; 
        } 
        // vector<int> visited(n+1); 
        int maxi = 1; 
        dfs(1, 0, arr, mp, maxi, 1/*, visited*/); 
        cout<<maxi<<endl; 
    }
} 