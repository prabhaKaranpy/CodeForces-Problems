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
        int n, x, y; cin>>n>>x>>y; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        ll ans = 0LL; 
        map<int, vector<int>> mp; 
        for(int &it : arr) mp[it%y].pb(it); 
        for(auto &it : mp){
            map<ll, ll> mpx; 
            for(int &e : it.second){
                mpx[e%x] ++; 
            } 
            for(auto &it : mpx){
                ll key = it.first; 
                if(key == 0 || (x-(key%x) == key)){
                    ll count = it.second; 
                    ans += ((count * (count-1LL))/2LL); 
                    it.second = 0; 
                } 
                else{
                    ll family1 = it.second; 
                    ll family2 = mpx[x-(key%x)]; 
                    ans += (family1 * family2); 
                    it.second = 0; 
                }
            }
        } 
        cout<<ans<<endl; 
        // vector<int> arr(n); for(int &it : arr) cin>>it; 
        // map<int, int> mp; 
        // for(int &it : arr) mp[it%y] ++; 
        // map<int, int> mpx; 
        // for(int &it : arr) mp[x-(it%x)] ++; 
        // ll ans = 0LL; 
        // for(int i = 0; i < n; i++){
        //     int temp = arr[i]; 
        //     if(mp[temp%x] && (mp[temp%y])){
        //         ll count = min(mp[temp%x], mp[temp%y]); 
        //         count --; 
        //         ans += ((ll)((count * (count-1))/2LL))/2LL; 
        //     }
        // } 
        // cout<<ans<<endl; 
    }
}