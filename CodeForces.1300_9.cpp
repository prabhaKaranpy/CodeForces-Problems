#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<int>> arr; 
        map<int, int> mp; 
        for(int z = 0; z < n; z ++){
            int k; cin>>k; 
            vector<int> p(k); for(int &it : p) cin>>it; 
            arr.pb(p); 
            for(int &it : p){
                mp[it] ++; 
            } 
        } 
        int found = 0; 
        for(auto &it : arr){
            int count = 0, size = (int)(it.size()); 
            for(int &e : it){
                if(mp[e] > 1) count ++; 
            } 
            if(count == size){
                found = 1; cout<<"Yes"<<endl; break; 
            }
        } 
        if(!found){
            cout<<"No"<<endl; 
        } 
    }
} 