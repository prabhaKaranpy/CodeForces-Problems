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
        string s; cin>>s;
        int count = 0; 
        for(char &ch : s){
            if(ch == 'Y') count ++; 
        } 
        if(count >= 2){
            cout<<"NO"<<endl; 
        } 
        else cout<<"YES"<<endl; 

    }
}