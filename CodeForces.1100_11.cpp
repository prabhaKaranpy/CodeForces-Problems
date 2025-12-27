#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long 
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        // GREEDY FAILS...  
        // int l = 0, r = n-1; 
        // while(k--){
        //     if(arr[l] + arr[l+1] < arr[r]){
        //         l += 2; 
        //     } 
        //     else r --; 
        // } 
        // ll ans = accumulate(arr.begin()+l, arr.begin()+r+1, 0LL); 
        // cout<<ans<<endl; 
        vector<int> pref(n); 
        pref[0] = arr[0]; 
        for(int i = 1; i <n; i++) pref[i] = pref[i-1] + arr[i]; 
        int maxi = 0; 
        for(int i = 0; i <= k; i++){
            int left = (2*i); 
            int right = (n-1-(k-i)); 
            maxi = max(maxi, (pref[right] - ((left-1 >= 0 ) ? pref[left-1] : 0))); 
        } 
        cout<<maxi<<endl; 
    }
}