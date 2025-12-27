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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        int mini = 0; 
        reverse(arr.begin(), arr.end()); 
        int maxi = 0; 
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            mp[arr[i]] ++; 
            maxi = max(maxi, mp[arr[i]]); 
        } 
        vector<vector<int>> a(maxi); 
        mp.clear(); 
        for(int i = 0; i < n; i++){
            mp[arr[i]] ++; 
            a[mp[arr[i]]-1].pb(arr[i]); 
        } 
        // for(auto &it : a){
        //     for(int &e : it) cout<<e<<" "; 
        //     cout<<endl; 
        // } 
        // cout<<endl; 
        int total = 0; 
        for(int i = 0; i < maxi; i++){
            int size = a[i].size(); 
            int count = 1; 
            for(int j = 1; j < size; j++){
                if((a[i][j-1] - a[i][j]) > 1){
                    count ++; 
                } 
            } 
            total += count; 
        } 
        cout<<total<<endl; 
    }
}