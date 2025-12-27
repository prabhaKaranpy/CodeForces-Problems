#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    // int T; cin>>T; 
    // while(T--){
        int n, q; cin>>n>>q; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> queries(q); for(int &it : queries) cin>>it; 
        vector<int> ans(q); 
        unordered_map<int, int> mp; 
        for(int i = n-1; i >= 0; i--){
            mp[arr[i]] = i; 
        } 
        unordered_set<int> stt;
        map<int, unordered_set<int>> childs; 
        for(int i = 0; i < n; i++){
            if(stt.find(arr[i]) == stt.end()){
                stt.insert(arr[i]); 
                for(auto &it : stt){
                    childs[arr[i]].insert(it); 
                } 
                childs[arr[i]].erase(arr[i]);
            }
        } 
        for(int i = 0; i < q; i++){
            int temp = queries[i]; 
            int pos = mp[temp]; 
            ans[i] = pos; 
            for(auto &it : childs[temp]){
                mp[it] ++; 
                childs[it].insert(temp); 
            } 
            childs[temp].clear(); 
            mp[temp] = 0; 
            // for(auto &it : childs){
            //     cout<<it.first<<" : "; 
            //     for(auto &e : it.second) cout<<e<<" "; 
            //     cout<<endl; 
            // } 
            // cout<<endl; 
        } 
        for(int &it : ans) cout<<it+1<<" "; 
        cout<<endl; 
//     }
}