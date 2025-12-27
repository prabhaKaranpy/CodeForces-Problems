#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
void primeFactors(int n, map<int, int> &mp){
    if(n == 1) return; 
    if(n == 2){
        mp[n] ++; return; 
    } 
    int originalN = n; 
    while((n%2) == 0){
        mp[2] ++; 
        n /= 2; 
    } 
    for(int i = 3; (i * i) <= n; i+= 2){
        while((n%i) == 0){
            mp[i] ++; 
            n /= i; 
        }
        if(n == 1) return; 
    }
    if(n > 1){
        mp[n] ++; 
        return; 
    }
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        map<int, int> mp; 
        for(auto &it : arr){
            primeFactors(it, mp); 
        } 
        int found = 0; 
        for(auto &it : mp){
            // cout<<"MP : "<<it.first<<" : "<<it.second<<endl; 
            if((it.second % n)){
                found = 1; cout<<"NO"<<"\n"; break; 
            } 
        } 
        if(!found) cout<<"YES"<<"\n"; 
    }
}

