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
        int n; cin>>n; vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> copy(n); 
        for(int i= 1; i <= n; i++) copy[i-1] = i; 
        vector<int> t; 
        for(int i = 0; i < n; i++){
            if(arr[i] != copy[i]) t.pb(i); 
        } 
        int l = 0, r = (int)t.size() -1; 
        while(l<=r){
            swap(arr[t[l]], arr[t[r]]); 
            l ++; r --; 
        } 
        int found = 0; 
        for(int i=  0; i < n; i++){
            if(arr[i] != copy[i]){
                found = 1; break; 
            } 
        } 
        if(!found){
            cout<<"YES"<<endl; 
        } 
        else cout<<"NO"<<endl; 
    }
}