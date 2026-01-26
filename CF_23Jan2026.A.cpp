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
        int n, h, l; cin>>n>>h>>l; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        int x, y; x = y = n; 
        for(int i = 0; i < n; i++){
            if(arr[i] > h){
                x = i; break; 
            } 
        } 
        for(int i =0; i < n; i++){
            if(arr[i] > l){
                y = i; break;  
            } 
        } 
        int maxi = max(x, y), mini = min(x, y); 
        int rem = maxi-mini; 
        int count = min(rem, mini); 
        if(mini-rem > 0){
            count += ((mini-rem)/2LL); 
        } 
        cout<<count<<endl; 
        // cout<<"X : "<<x<<" Y : "<<y<<endl; 
        // map<int, int> mp; for(auto &it : arr) mp[it] ++; 
        // int count = 0, prev = 0; 
        // while(1){ 
        //     for(int i = 1; i <= h; i++){
        //         for(int j = 1; j <= l; j++){
        //             if(i != j && mp[i] > 0 && mp[j] > 0){
        //                 mp[i] --; mp[j] --; 
        //                 count ++; 
        //             }
        //             else{
        //                 if(mp[i] > 1){
        //                     mp[i] -= 2; count ++; 
        //                 }
        //             }
        //         }
        //     } 
        //     if(count == prev) break; 
        //     prev = count; 
        // }
        // cout<<count<<endl; 
    }
}