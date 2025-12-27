#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int found = 0; 
        for(int &it : arr){
            if(__gcd(it, 2LL) == 1){
                cout<<2<<endl; 
                found = 1; 
                break; 
            }
        } 
        if(found) continue; 
        for(int i = 3; i < 100; i += 2LL){
            for(int &it : arr){
                if(__gcd(it, i) == 1){
                    found = 1; 
                    cout<<i<<endl; 
                    break; 
                } 
            } 
            if(found) break; 
        } 
    }
}