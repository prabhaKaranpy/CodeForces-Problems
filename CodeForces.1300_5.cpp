#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
ll f(ll n){
    if(n <= 1) return 1; 
    return (n * f(n-1))%mod; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        string s; cin>>s; 
        int n = s.size(); 
        if(n == 1){
            cout<<0<<" "<<1<<endl; continue; 
        }
        int ans = 0; 
        ll combinations = 1LL; 
        int i = 0; 
        string temp; temp.pb(s[0]); 
        vector<string> arr; 
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                int size = temp.size(); 
                ans += (size-1); 
                arr.pb(temp); 
                temp.clear(); 
                temp.pb(s[i]); 
            } 
            else{
                temp.pb(s[i]); 
            }
        }
        int size = temp.size(); 
        if(size > 0){
            ans += (size-1); arr.pb(temp); 
        } 
        int blocks = arr.size(); 
        // cout<<"Blocks : "<<blocks<<endl; 
        ll erase = n - blocks; 
        ll factorialOfErase = f(erase); 
        for(auto &it : arr){
            combinations *= (ll)(it.size()); 
            combinations %= mod; 
        } 
        combinations *= factorialOfErase; 
        combinations %= mod; 
        cout<<ans<<" "<<combinations<<"\n"; 
    }
}