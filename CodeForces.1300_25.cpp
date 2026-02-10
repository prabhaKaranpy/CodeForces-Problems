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
    int n; cin>>n;
    vector<int> a(n), b(n); for(int &it : a) cin>>it; for(int &it : b) cin>>it; 
    map<int, int> mp; 
    for(int i = 0; i < n; i++){
        mp[a[i]] =i; 
    } 
    vector<int> c(n); 
    for(int i= 0; i < n; i++){
        c[mp[b[i]]] = i; 
    } 
    int maxi = c[0]; 
    int count = 0; 
    for(int i = 1; i < n; i++){
        if(c[i] < maxi){
            count ++; 
        } 
        maxi = max(maxi, c[i]); 
    } 
    cout<<count<<endl; 
    // vector<int> enter(n+1), exit(n+1); 
    // for(int i = 0; i < n; i++){
    //     enter[a[i]] = i; 
    // } 
    // for(int i = 0; i < n; i++){
    //     exit[b[i]] = i; 
    // }   
    // int maxi = 0; 
    // for(int i= 1; i <= n; i++){
    //     maxi = max(maxi, (exit[i]-enter[i])); 
    // } 
    // cout<<maxi<<endl; 
}