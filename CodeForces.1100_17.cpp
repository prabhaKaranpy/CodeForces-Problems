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
        vector<vector<int>> arr(n, vector<int> (n)); 
        for(auto &it : arr){
            for(int &e : it) cin>>e; 
        } 
        vector<vector<int>> copy(n, vector<int> (n)); 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                copy[i][j] = arr[n-1-i][n-1-j]; 
            } 
        } 
        // for(auto &it : copy){
        //     for(int &e : it) cout<<e<<" "; 
        //     cout<<endl; 
        // } 
        int count = 0; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] != copy[i][j]) count ++; 
            } 
        } 
        count /= 2; 
        if(count > k) cout<<"NO"<<endl; 
        else if(count == k) cout<<"YES"<<endl; 
        else if(((k-count)&1) && (!(n&1))) cout<<"NO"<<endl; 
        else cout<<"YES"<<endl; 
    }
}
