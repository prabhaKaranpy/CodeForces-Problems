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
        int maxi = 1; 
        for(int i = 0; i < n; i++){
            arr[i] -= i;    // I'M HERE LOOKING FOR "True Elevation"... (10 + 0) , (10 + -1), (10 + -2),... 
        } 
        sort(arr.begin(), arr.end()); 
        map<int, int> dp; 
        for(auto &it : arr){
            dp[it] = dp[it-1] +1; // finding LONGEST AP with d = -1... (True Elevation)    
        } 
        for(auto &it : dp){
            maxi = max(maxi, it.second); 
        } 
        cout<<maxi<<endl; 
    }
}