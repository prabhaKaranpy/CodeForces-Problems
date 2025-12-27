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
        int n, m; cin>>n>>m; 
        vector<int> arr(m); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        vector<int> gaps; 
        for(int i = 1; i < m; i++){
            if(arr[i] - arr[i-1] -1 >= 0) gaps.pb(arr[i]-arr[i-1]-1); 
            else gaps.pb(0); 
        } 
        gaps.pb(arr[0] - 1 + (n- arr[m-1])); 
        
        sort(gaps.rbegin(), gaps.rend()); 
        // for(int &it : gaps) cout<<it<<" "; 
        // cout<<endl; 
        // int ans = gaps[0]; 
        // cout<<"ans : "<<ans<<endl; 
        // if(ans != 1){
        //     ans -= 1; 
        // } 
        int ans = 0; 
        for(int i = 0; i < m; i++){
            gaps[i] -= (2*2*i); 
            if(gaps[i] > 1){
                ans += gaps[i]-1; 
            } 
            else if(gaps[i] == 1){
                ans += gaps[i]; 
            } 
        }
        cout<<n-ans<<endl; 
    }
}