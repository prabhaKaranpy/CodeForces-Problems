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
        int n, x, m; cin>>n>>x>>m; 
        int found = 0; 
        vector<int> arr; 
        for(int i = 0; i < m; i++){
            int l, r; cin>>l>>r; 
            if(found == 2){
                if(l <= arr[1] && r >= arr[0]){
                    arr[0] = min(arr[0], l); 
                    arr[1] = max(arr[1], r); 
                } 
                else if(r >= arr[0] && l <= arr[1]){
                    arr[0] = min(arr[0], l);   
                    arr[1] = max(arr[1], r); 
                } 
            }
            if(x >= l && x <= r && found == 0){
                found = 1;  
                // arr.pb({l, r}); 
            } 
            if(found == 1){
                arr = {l, r}; 
                found = 2; 
            } 
            
            // if(found){
            //     arr.pb({l, r}); 
            // }
        } 
        int ans = 1; 
        int size = arr.size(); 
        if(size) ans = (arr[(int)(arr.size())-1] - arr[0] +1); 
        cout<<ans<<endl; 
        // sort(arr.begin(), arr.end()); 
        // vector<vector<int>> merged; 
        // int size = arr.size(); 
        // if(size > 0) merged.push_back(arr[0]); 
        // for(int i= 1; i < size; i++){
        //     int first = arr[i][0], second = arr[i][1]; 
        //     if(first <= merged.back()[1]) merged.back()[1] = max(merged.back()[1], second); 
        //     else merged.pb(arr[i]); 
        // } 
        // int ans = 1; 
        // for(auto &it : merged){
        //     int start = it[0], end = it[1]; 
        //     if(x >= start && x <= end){
        //         ans = (end-start+1); 
        //         break; 
        //     }
        // } 
        // cout<<ans<<endl; 
    }
}