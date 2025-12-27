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
        ll n; cin>>n; 
        string s; 
        int count = 0; 
        for(ll i = 0; i <= 31; i++){
            if(n & (1LL<<i)){
                for(ll j = i; j <= 31; j++){
                    if(n & (1<< j)){
                        count ++; 
                        s.pb('1'); 
                    } 
                    else s.pb('0'); 
                }
                break; 
            }
        } 
        if(count &1){
            cout<<"NO"<<endl; 
            continue; 
        }
        int size = s.size(); 
        int end = -1; 
        for(int i = size-1; i >= 0; i--){
            if(s[i] == '1'){
                end = i; 
                break; 
            }
        } 
        if(size == 0) cout<<"YES"<<endl; 
        else{
            string t = ""; 
            for(int i = 0; i <= end; i++){
                t.pb(s[i]); 
            } 
            string w = t; 
            reverse(w.begin(), w.end()); 
            if(t == w) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl; 
        }
    }
}