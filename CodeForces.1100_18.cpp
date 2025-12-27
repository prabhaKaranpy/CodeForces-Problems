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
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int ans = 0; 
        for(int i = 0; i < n; i++){
            arr[i] += (i+1); 
        } 
        sort(arr.begin(), arr.end()); 
        for(int i = 0; i < n; i++){
            if(k >= arr[i]){
                ans ++; 
                k -= arr[i]; 
            } 
            else break; 
        } 
        cout<<ans<<endl; 
    }
}