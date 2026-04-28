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
        int maxi = 0; 
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                maxi = max(maxi, (arr[i]^arr[j])); 
            } 
        } 
        cout<<maxi<<endl; 
        // sort(arr.rbegin(), arr.rend()); 
        // for(int i = 0; i < n-1; i ++){
        //     for(int j = i+1; j < n; j++){
        //         arr[j] ^= arr[i]; 
        //     }
        // }
        // cout<<arr[n-1]<<endl; 
    }
}