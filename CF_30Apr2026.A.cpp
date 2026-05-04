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
        int x, y; cin>>x>>y; 
        if((x&1) && (y&1)){
            cout<<"NO"<<endl; 
        } 
        else cout<<"YES"<<endl; 
    }
}