#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> a(n), b(n); for(int &it : a) cin>>it; for(int &it : b) cin>>it; 
        vector<pair<int, int>> c(n); 
        for(int i = 0 ; i < n; i++){
            c[i].first = a[i] - b[i]; 
            c[i].second = i+1; 
        } 
        
        sort(c.begin(), c.end()); 
        // for(auto &it : c){
        //     cout<<it.first<<" : "<<it.second<<endl; 
        // } 
        int count = 1; 
        vector<int> ans; 
        ans.pb(c[n-1].second); 
        int compare = c[n-1].first; 
        for(int i = n-2; i >= 0; i--){
            if(c[i].first != compare){
                break;  
            } 
            ans.pb(c[i].second); 
            count ++; 
        } 
        cout<<count<<endl; 
        reverse(ans.begin(), ans.end()); 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}