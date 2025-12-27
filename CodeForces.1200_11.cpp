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
        string s; cin>>s; 
        ll ans = 0LL; 
        vector<int> arr(n+1); 
        for(int i = 1; i <= n; i++){
            arr[i] = (s[i-1] == '1') ? 1 : 0; 
        } 
        vector<int> cost(n+1); 
        for(int i = n; i >= 1; i--){
            for(int j = i; j <= n; j+=i){
                if(arr[j]){
                    break; 
                } 
                cost[j] = i; 
            } 
        } 
        // for(int &it : arr) cout<<it<<" "; 
        // cout<<endl; 
        // for(int &it : cost) cout<<it<<" "; 
        // cout<<endl; 
        for(int &it : cost) ans += (ll)(it); 
        cout<<ans<<endl; 
        // for(int i = n-1; i >= 0; i--){
        //     if(s[i] == '0'){
        //         for(int j = i; j < n; j += (i+1)){
        //             if(s[j] == '1'){
        //                 break; 
        //             } 
        //             // s[j] = '1'; 
        //             ans += i+1; 
        //         }
        //     }
        // } 
        // cout<<ans<<endl; 
    }
}