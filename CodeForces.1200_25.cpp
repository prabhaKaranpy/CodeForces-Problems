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
        int n; cin>>n; vector<int> arr(n); for(int &it : arr) cin>>it; 
        ll count = 0LL; 
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            mp[i+1-arr[i]] ++; 
        } 
        for(auto &it : mp){
            count += ((ll)it.second * ((ll)it.second-1LL)) /2LL; 
        } 
        cout<<count<<endl; 
        // for(int i = 0; i < n; i++){
        //     if(arr[i] == i+1) count ++; 
        // } 
        // cout<<((count * (count-1LL))/2LL)<<endl; 
    }
} 