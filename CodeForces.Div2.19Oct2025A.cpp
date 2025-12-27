#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        string s; cin>>s; 
        int prev = -1; 
        for(int i= 0; i < n; i++){
            if(s[i] == '1'){
                prev = i; 
                break; 
            } 
        } 
        int count = 0; 
        if(prev == -1){
            cout<<count<<endl; 
            continue; 
        } 
        count ++; 
        k = k-1; 
        for(int i = prev+1; i < n; i++){
            if(s[i] == '1'){
                if(i-prev <= k){
                    prev = i; 
                } 
                else{
                    count ++; 
                    prev = i; 
                }
            }
        } 
        cout<<count<<endl;  
    }
}