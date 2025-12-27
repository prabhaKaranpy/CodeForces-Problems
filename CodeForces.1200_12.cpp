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
        vector<int> X(n), Y(n); 
        for(int &it : X) cin>>it; 
        for(int &it : Y) cin>>it; 
        vector<int> arr(n); 
        for(int i = 0; i < n; i++){
            arr[i] = Y[i] - X[i]; 
        } 
        sort(arr.begin(), arr.end()); 
        int count = 0; 
        int l = 0, r = n-1; 
        while(l < r){
            if(arr[l] + arr[r] >= 0){
                count ++; 
                l ++; r --; 
            }
            else{
                l ++; 
            }
        } 
        cout<<count<<endl; 
        // vector<pair<int, int>> arr; 
        // for(int i = 0; i < n; i++){
        //     arr.pb({X[i], Y[i]}); 
        // } 
        // sort(arr.begin(), arr.end()); 
        // for(auto &it : arr){
        //     cout<<it.first<<" "<<it.second<<endl; 
        // } 
        // cout<<endl; 
    }
}