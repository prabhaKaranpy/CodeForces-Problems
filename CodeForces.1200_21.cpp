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
        vector<pair<ll, ll>> a; 
        for(int i = 0; i < n; i++){
            a.pb({arr[i], i+1}); 
        } 
        sort(a.begin(), a.end()); 
        ll count = 0LL; 
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(((ll)(a[i].first) * (ll)(a[j].first)) >= (2LL*(ll)(n))) break; 
                if((ll)(a[i].first) * (ll)(a[j].first) == a[i].second + a[j].second){
                    count ++; 
                } 
            } 
        } 
        cout<<count<<endl; 
    }
}