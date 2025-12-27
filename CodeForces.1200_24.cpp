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
        int zeros = 0;  
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zeros ++; 
        } 
        if(!(zeros & 1)) cout<<"BOB"<<endl; 
        else{
            if(zeros == 1) cout<<"BOB"<<endl; 
            else{
                cout<<"ALICE"<<endl; 
            }
        }
    }
}