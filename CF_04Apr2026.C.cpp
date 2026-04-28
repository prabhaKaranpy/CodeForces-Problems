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
        int m = 3*n; 
        int l = 1, r = m; 
        for(int i = 0; i < (n); i++){
            cout<<r<<" "; r --; cout<<r<<" "<<l<<" "; 
            r --; 
            l ++; 
        } 
        cout<<endl; 
    }
}