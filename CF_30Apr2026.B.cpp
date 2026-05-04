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
        int n; cin>>n; 
        string s; cin>>s; 
        int one = 0, two = 0; 
        for(auto &it : s){
            if(it == '(') one ++; 
            else two ++; 
        } 
        if(one == two) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl; 
    }
}