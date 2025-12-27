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
        vector<int> hash(1001, -1); 
        for(int i = 0; i < n; i++) hash[arr[i]] = i+1; 
        int maxi = -1; 
        for(int i = 1; i <= 1000; i++){
            for(int j = 1; j <= 1000; j++){
                if(hash[i] != -1 && hash[j] != -1){
                    if(__gcd(i, j) == 1) maxi = max(maxi, hash[i]+hash[j]); 
                } 
            } 
        } 
        cout<<maxi<<endl; 
        // int ans = -1; 
        // for(int i = n-1; i >= 0; i--){
        //     if(__gcd(arr[n-1], arr[i]) == 1){
        //         ans = n + i+1; 
        //         break; 
        //     } 
        // } 
        // cout<<ans<<endl; 
    }
}
