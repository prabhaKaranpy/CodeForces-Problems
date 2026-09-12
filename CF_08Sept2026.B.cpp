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
        int x, y, k; cin>>x>>y>>k; 
        int c = 0; 
        int i = 0; 
        int ans = 0; 
        while(c < k){
            if((y-x) < x){
                ans += ((k-c) * (y%x)); // or can also be writen as ans += ((k-c) * (y-x)); 
                break; 
            }
            ans += (y % x); 
            y ++; x ++; 
            c ++; 
        } 
        cout<<ans<<endl; 
    }
}