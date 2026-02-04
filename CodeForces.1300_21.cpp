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
        // set<int> indices; 
        // int cur = arr[0]; 
        // indices.insert(0); 
        vector<int> temp; 
        temp.pb(0); 
        int up = 1; 
        if(arr[1] < arr[0]) up = 0; 
        for(int i = 1; i < n; i++){
            if(up && (arr[i] < arr[i-1])){
                temp.pb(i-1); 
                up ^= 1; 
            } 
            else if(!(up) && (arr[i] > arr[i-1])){
                temp.pb(i-1); 
                up ^= 1; 
            }
        }
        temp.pb(n-1); 
        int size = temp.size(); 
        cout<<size<<endl;  
        for(auto &it : temp){
            cout<<arr[it]<<" "; 
        } 
        cout<<endl; 
        // for(int i= 1; i < n; i++){
        //     if(arr[i] > arr[i-1]){
        //         continue; 
        //     } 
        //     else{
        //         indices.insert(i-1); 
        //         maxi += (abs(cur - arr[i-1])); 
        //         cur = arr[i]; 
        //     }
        // } 
        // for(int i = 1; i < n; i++){
        //     if(arr[i] < arr[i-1]){
        //         continue; 
        //     } 
        //     else{
        //         indices.insert(i-1); 
        //         maxi += (abs(cur-arr[i-1])); 
        //         cur = arr[i]; 
        //     } 
        // } 
        // int size = indices.size(); 
        // cout<<size<<endl; 
        // for(auto &it : indices){
        //     cout<<arr[it]<<" "; 
        // } 
        // cout<<endl; 
    }
}