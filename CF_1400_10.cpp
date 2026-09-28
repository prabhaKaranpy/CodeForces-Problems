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
        // idea is to brute force or try with all the possible trailing zeros (i.e from 10 -> 1e18 (because n.m <= 1e18))...  
        int n, m; cin>>n>>m; 
        int copy = n; 
        unordered_map<int, int> mp; // only storing the no. of 2 factors & 5 factors 
        while((n%2) == 0){
            mp[2] ++; 
            n /= 2; 
        } 
        for(int i = 5; i <= 5; i++){
            while((n%i) == 0){
                mp[i] ++; 
                n /= i; 
            } 
        } 
        // if(n > 1) mp[n] ++; 
        // mp[1] ++; 
        int two = mp[2], five = mp[5]; 
        int want = abs(two-five); 
        if(want){
            int c = (two > five) ? 5 : 2; 
            int i = c; 
            while((i <= m) && (want > 0)){
                want --; 
                i *= c; 
            } 
            i /= c; 
            if(want == 0){
                while((i*10) <= m){
                    i *= 10; 
                } 
                // i /= 10; 
            } 
            int div = m / i; 
            i *= div; 
            int ans = copy * i; 
            cout<<ans<<endl; 
        } 
        else{
            int i = 1; 
            while((i*10) <= m){
                i *= 10; 
            } 
            // i /= 10; 
            int div = m / i; 
            i *= div; 
            int ans = copy * i; 
            cout<<ans<<endl; 
        }
    }
}