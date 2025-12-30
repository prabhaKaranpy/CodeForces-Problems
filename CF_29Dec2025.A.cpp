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
        int n; cin>>n; 
        string s; cin>>s; 
        if(s.find("2026") != string::npos){
            cout<<0<<endl; continue; 
        } 
        if(s.find("2025") == string::npos){
            cout<<0<<endl; continue; 
        } 
        else{
            cout<<1<<endl; continue; 
        }
    }
}