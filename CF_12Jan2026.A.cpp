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
        if(n ==2){
            cout<<2<<endl; 
        } 
        else if(n ==3) cout<<3<<endl; 
        else if(n &1){
            cout<<1<<endl; 
        } 
        else cout<<0<<endl; 
    }
}