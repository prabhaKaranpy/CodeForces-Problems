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
        int x, y; cin>>x>>y; 
        cout<<(x+y)<<" "; 
        int mini = 0; 
        int xx = 0LL; 
        int summ = x+y; 
        for(int i = 29; i >= 0; i--){
            int t = (1LL << i); 
            if((xx^t) <= x){
                if((summ & t)){
                    xx ^= t; 
                } 
            } 
        } 
        mini = (x - xx); 
        cout<<mini<<endl; 
    }
}