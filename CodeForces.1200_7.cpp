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
        ll n, m; cin>>n>>m;                
        vector<vector<ll>> arr(n, vector<ll>(m)); 
        for(auto &it : arr){
            for(ll &e : it) cin>>e; 
        } 
        if(n == 1LL){
            cout<<0<<endl; 
            continue;  
        } 
        ll ans = 0LL; 
        for(int j = 0; j < m; j++){ 
            vector<ll> temp; 
            for(int i = 0; i < n; i++){
                temp.pb(arr[i][j]); 
            } 
            sort(temp.begin(), temp.end()); 
            // for(ll &it : temp){
            //     cout<<it<<" "; 
            // } cout<<endl; 
            ll total = (n-1) * (-temp[0]); 
            for(int i = 1; i < n; i++){
                total += ((i * temp[i]) + ((n-1-i) * (-temp[i]))); 
            } 
            // cout<<"Total : "<<total<<endl; 
            ans += total; 
        } 
        cout<<ans<<endl; 
    }
}