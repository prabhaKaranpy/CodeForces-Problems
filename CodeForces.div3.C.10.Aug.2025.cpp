// #include<bits/stdc++.h>
// using namespace std; 
// int main(void){
//     int T; cin>>T; 
//     while(T--){
//         int n, k; cin>>n>>k; 
//         vector<int> arr(n), t(n); 
//         for(int &it : arr) cin>>it; 
//         for(int &it : t) cin>>it; 
//         map<int, int> mp; 
//         for(int i = 0; i < n; i++){
//             mp[(t[i]%k)] ++; 
//         } 
//         int count = 0; 
//         for(int i = 0; i < n; i++){
//             int temp = arr[i]; 
//             int found = 0; 
//             if(mp[(temp%k)]){
//                 mp[(temp%k)] --; 
//                 count ++; 
//                 found = 1; 
//             } 
//             if(!found){
//                 if(mp[(k-(temp%k))]){
//                     mp[(k-(temp%k))] --; 
//                     count ++; 
//                 } 
//             } 
//         } 
//         if(count == n) cout<<"YES"<<endl; 
//         else cout<<"NO"<<endl; 
//     }
// } 

//          PROBLME : D (TREES OR GRAPHS) 
#include<bits/stdc++.h> 
using namespace std; 
unordered_map<int, vector<int>> mp; 
unordered_map<int, int> visited; 
int dfs(int i){
    if(mp[i].size() == 1) return 1; 
    visited[i] = 2; 
    int take = 0; 
    for(int &it : mp[i]){
        if(visited[it] == 1){ 
            take += dfs(it);    
        }
    } 
    return take; 
} 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        // unordered_map<int, vector<int>> mp; 
        for(int i = 1; i < n; i++){
            int u, v; cin>>u>>v; 
            mp[u].push_back(v); 
            mp[v].push_back(u); 
            visited[u] = 1; 
            visited[v] = 1; 
        } 
        int target, maxi = 0; 
        for(auto &it : mp){ 
            int count = 0; 
            for(auto &e : it.second){
                if(mp[e].size() == 1){
                    count ++; 
                } 
            } 
            if(count > maxi){
                target = it.first; 
                maxi = count; 
            }
        }  
        cout<<dfs(target)-maxi<<endl; 
        mp.clear(); 
        visited.clear(); 
    }
}