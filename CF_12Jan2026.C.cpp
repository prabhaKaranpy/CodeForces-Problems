#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
int f(int n, int &k, map<int, int> &mp){
    if(n < k) return 1e15; 
    if(n == k) return 1;
    if(mp.find(n) != mp.end()){
        return mp[n]; 
    }
    if(n&1){
        return mp[n] = 1 + min(f((n/2)+1, k, mp), f((n/2), k, mp)); 
    }
    else return  mp[n] = 1 + min(f((n/2), k, mp), f((n/2), k, mp)); 
} 
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        if(k > n){ cout<<-1<<endl; continue; } 
        if(k == n){cout<<0<<endl; continue; } 
        map<int, int> mp; 
        if(n&1){
            int ans = min(f(n/2, k, mp), f((n/2)+1, k, mp)); 
            if(ans >= 1e15) cout<<-1<<endl; 
            else cout<<ans<<endl; 
        } 
        else{
            int ans = min(f(n/2, k, mp), f((n/2), k, mp)); 
            if(ans >= 1e15) cout<<-1<<endl; 
            else cout<<ans<<endl; 
        }
    }
}