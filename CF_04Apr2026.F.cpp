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
        int n = x + y; 
        if((n&1) && (y == 0)){
            cout<<"NO"<<endl; 
            continue; 
        } 
        if(!(n&1) && (!x)){
            cout<<"NO"<<endl; continue; 
        } 
        if(x > y){
            cout<<"NO"<<endl; continue; 
        } 
        cout<<"YES"<<endl; 
        if(n&1){
            y --; 
            int h = 0; 
            for(int i = 0; i < y; i++){
                cout<<1<<" "<<(i+2)<<endl; 
                h = (i+2); 
            } 
            int k = 2; 
            for(int i = 0; i < x; i++){
                cout<<k<<" "<<(h+i+1)<<endl; k ++; 
            }
        }
        else{
            x--; 
            int h = 0; 
            for(int i = 0; i < y; i++){
                cout<<1<<" "<<(i+2)<<endl; 
                h = (i+2); 
            } 
            int k = 2; 
            for(int i = 0; i < x; i++){
                cout<<k<<" "<<(h+i+1)<<endl; k ++; 
            }
        }
    }
}