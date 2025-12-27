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
        vector<vector<ll>> arr; 
        vector<int> hash(m+1); 
        unordered_map<ll, ll> mp; 
        for(int i = 0; i < n; i++){
            ll l; cin>>l; 
            vector<ll> temp(l); 
            for(ll &it : temp){
                cin>>it; 
                hash[it] = 1; 
                mp[it] ++; 
            } 
            arr.pb(temp); 
        } 
        int count = 0; 
        for(int &it : hash) count += it; 
        if(count == m){ 
            int found = 0; 
            int ans = 0; 
            for(auto &it : arr){
                int c = 0; 
                int size = it.size(); 
                for(auto &e : it){
                    if(mp[e] > 1LL) c ++; 
                } 
                if(c == size) ans ++; 
                if(ans == 2){
                    // cout<<"HELLO"<<endl; 
                    found = 1; 
                    break; 
                }
            } 
            if(found) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl; 
        } 
        else{
            cout<<"NO"<<endl; 
        }

    }
}