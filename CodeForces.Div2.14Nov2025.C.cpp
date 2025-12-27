#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        if(n == 1){
            cout<<max(arr[0], (ll)(2))<<endl; 
            continue; 
        }
        // vector<int> pref(n); pref[0] = arr[0]; 
        // for(int i = 1; i < n; i++){
        //     pref[i] = pref[i-1] + arr[i]; 
        // } 
        // int l = 0, r = -1; 
        // int maxi = 0LL; 
        // for(auto &it : arr) maxi += it; 
        // int total = maxi; 
        // while(r < n && l < n){
        //     if(arr[l] < ((l+1) + (l+1))){
        //         r = l; 
        //         while(r < n){
        //             if(arr[r] < ((r+1) + (r+1))){
        //                 r ++; 
        //             } 
        //             else break; 
        //         } 
        //         maxi = max(maxi, (total-(pref[r-1] - (l-1LL >= 0LL ? pref[l-1LL] : 0LL)) +((r-l) * (l+1+r)))); 
        //         l = r; 
        //     } 
        //     else l ++; 
        // } 
        
        // cout<<maxi<<endl; 
        vector<int> pref(n+1); pref[0] = 0; 
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + arr[i-1]; 
        } 
        int maxLeft = 0; 
        int total = 0; 
        for(int &it : arr) total += it; 
        int change = 0; 
        for(int i = 1; i <= n; i++){
            maxLeft = max(maxLeft, (- (i * i) + i + pref[i-1])); 
            change = max(change, ((i*i) + i - pref[i])+maxLeft); 
        } 
        cout<<total + change<<endl; 
    }
}