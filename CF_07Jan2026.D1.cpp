#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int f(int i, vector<int> arr[], vector<int> &visited, vector<int> &levels, int level){
    levels[level] += 1; 
    visited[i] = 1; 
    int maxi = 0;
    int temp = 0; 
    for(auto &it : arr[i]){
        if(!visited[it]){
            temp += 1; 
            maxi = max(maxi, f(it, arr, visited, levels, level+1)); 
            
        }
    } 
    return max(maxi, temp);
} 
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr[n+1]; 
        for(int i = 0; i < n-1; i++){
            int u, v; cin>>u>>v; 
            arr[u].pb(v); 
            arr[v].pb(u); 
        } 
        vector<int> parent(n+1, -1); 
        vector<int> visited(n+1); 
        vector<int> levels(n+1); 
        f(1, arr, visited, levels, 1) +1; 
        int maxi = 0; 
        for(auto &it : levels) maxi = max(maxi, it); 
        int ans = maxi+1; 
        cout<<ans<<endl; 
    }
}