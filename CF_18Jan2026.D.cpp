#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m, h; cin>>n>>m>>h; 
        vector<int> arr((n+1)); for(int i = 1; i <= n; i++) cin>>arr[i]; 
        vector<int> hash(arr); 
        vector<vector<int>> temp; 
        stack<pair<int, int>> stt; 
        for(int i= 1; i <= m; i++){
            int b, c; cin>>b>>c; 
            // temp.pb({b, c}); 
            if((hash[b] + c) <= h){
                hash[b] += c; 
                stt.push({b, c}); 
            } 
            else{
                while(!stt.empty()){
                    auto [b, c] = stt.top(); 
                    stt.pop(); 
                    hash[b] -= c; 
                } 
            } 
        } 
        // for(int i= m-1; i >= 0; i--){
        //     if(hash[temp[i][0]] + temp[i][1] <= h){
        //         hash[temp[i][0]] += temp[i][1]; 
        //     } 
        //     else break; 
        // } 
        for(int i = 1; i <= n; i++) cout<<hash[i]<<" "; 
        cout<<endl; 
        // vector<vector<int>> temp((n+1)); 
        // for(int i = 1; i <= m; i++){
        //     int b, c; cin>>b>>c; 
        //     temp[b].pb(i); 
        //     hash[b] += c; 
        // } 
        // for(auto &it : temp){
        //     reverse(it.begin(), it.end()); 
        // } 
        // int mini = n; 
        // for(int i= 1; i <= n;i++){
        //     if(hash[i] >)
        // }
    }
}