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
        int a, b, n; cin>>a>>b>>n; 
        if((a/n) >= b){
            cout<<1<<endl; continue; 
        } 
        if(a == b){
            cout<<1<<endl; continue; 
        } 
        cout<<2<<endl; 
        // int l = 1, r = n; 
        // while(l <= r){
        //     int mid = (l+r) >> 1; 
        //     if((a/mid) >= b){
        //         l = mid + 1; 
        //     } 
        //     else if((a/mid) <= b){
        //         r = mid -1; 
        //     } 
        // } 
        // cout<<min((n-l+2), (2))<<endl; 
    }
}