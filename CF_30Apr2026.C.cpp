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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> both, two, three, common; 
        for(int &it : arr){
            if((it%3 == 0) && (it%2 == 0)){
                both.pb(it); 
            } 
            else if((it%2) == 0) two.pb(it); 
            else if((it%3) == 0) three.pb(it); 
            else common.pb(it); 
        } 
        vector<int> ans; 
        for(auto &it : both) ans.pb(it); 
        for(auto &it : two) ans.pb(it); 
        for(auto &it : common) ans.pb(it); 
        for(auto &it : three) ans.pb(it); 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}