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
        vector<int> a(n), b(n), c(n); 
        for(int &it : a) cin>>it; 
        for(int &It : b) cin>>It; 
        for(int &it : c) cin>>it; 
        int ans = 0LL; 
        int first = 0, second = 0; 
        for(int i = 0; i < n; i++){
            int count = 0; 
            for(int j = 0; j < n; j++){
                if(a[(j+i) % n] < b[j]){
                    count ++; 
                }
            } 
            if(count == n) first += 1; 
        } 
        for(int i = 0; i < n; i++){
            int count = 0; 
            for(int j = 0; j < n; j++){
                if(b[(j+i)%n] < c[j]){
                    count ++; 
                }
            } 
            if(count == n) second += 1; 
        } 
        // ans *= n; 
        // for(int i = 0; i < n; i++){
        //     int count = 0; 
        //     for(int j = 0; j < n; j++){
        //         if(a[j] < b[j] && b[j] < c[(j+i)%n]){
        //             count ++; 
        //         }
        //     } 
        //     if(count == n) ans += n; 
        // }  
        // ans *= n; 
        ans = first * second * n; 
        cout<<ans<<endl; 
    }
}