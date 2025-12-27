#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int dfs(int root, vector<int> graph[], string &s, int &ans, vector<int> &visited){ 
    int count = 0; 
    visited[root] =1 ; 
    for(auto &it : graph[root]){
        if(!visited[it]){
            count += dfs(it, graph, s, ans, visited); 
        }
    }     
    count += (s[root-1] == 'W' ? 1 : -1); 
    if(count == 0) ans ++; 
    return count; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> parents(n-1); 
        for(int &it : parents) cin>>it; 
        string s; cin>>s; 
        int m = s.size();  // m = n-1; 
        // for(int &it : parents) cout<<it<<" "; 
        // cout<<endl; 
        // cout<<s<<endl; 
        vector<int> graph[n+1]; 
        vector<int> visited(n+1); 
        for(int i = 2; i <= n; i++){
            graph[i].pb(parents[i-2]); 
            graph[parents[i-2]].pb(i);  
        } 
        // for(int i = 1; i <= n; i++){
        //     cout<<i<<" : "; 
        //     for(auto &it : graph[i]){
        //         cout<<it<<" "; 
        //     } 
        //     cout<<endl; 
        // }
        int ans= 0; 
        dfs(1, graph, s, ans, visited); 
        cout<<ans<<endl;  
    }
}