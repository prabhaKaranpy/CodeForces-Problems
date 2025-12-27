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
        int x, y; cin>>x>>y; 
        if(y > x){
            cout<<2<<endl; 
        } 
        else if(x == y) cout<<-1<<endl; 
        else{
            if(x >= (y+2) && (y >= 2)){
                cout<<3<<endl;             
            } 
            else cout<<-1<<endl; 
        }
    }
}