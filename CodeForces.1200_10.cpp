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
        ll n, q; cin>>n>>q; 
        vector<ll> arr(n), queries(q); 
        for(ll &it : arr) cin>>it; 
        for(ll &it : queries) cin>>it; 
        vector<ll> height(n); 
        height[0] = arr[0]; 
        for(int i = 1; i < n; i++){
            height[i] = arr[i] + height[i-1]; 
        } 
        // for(ll &it : height) cout<<it<<" "; 
        // cout<<endl; 
        // cout<<endl; 
        vector<ll> copy(arr); 
        for(int i = 1; i < n; i++){
            if(copy[i] < copy[i-1]) copy[i] = copy[i-1]; 
        } 
        // for(ll &it : copy) cout<<it<<" "; 
        // cout<<endl; 
        for(ll &it : queries){
            // if(it == 0){
            //     cout<<0<<" "; 
            //     continue; 
            // }
            auto lb = upper_bound(copy.begin(), copy.end(), it); 
            if(lb == copy.end()){
                cout<<height[n-1]<<" "; 
            } 
            else{
                int index = lb-copy.begin(); 
                // cout<<"INDEX : "<<index<<endl; 
                if(index-1 < 0){
                    cout<<0<<" "; continue; 
                }
                cout<<height[index-1]<<" "; 
            } 
        } 
        cout<<endl; 
    } 
} 