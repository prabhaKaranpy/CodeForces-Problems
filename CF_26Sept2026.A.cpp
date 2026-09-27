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
        int n, k; cin>>n>>k; 
        int ans = 2 * (k-1); 
        n -= (k-1); 
        int a = 1; 
        for(int i = 0; i < n; i++){
            a *= 2; 
        } 
        cout<<(ans+a)<<endl; 
    }
}