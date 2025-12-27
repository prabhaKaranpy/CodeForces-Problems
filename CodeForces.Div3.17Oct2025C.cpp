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
        ll a, b; cin>>a>>b; 
        if(a == b){
            cout<<0<<endl; 
            continue; 
        } 
        ll index = 0; 
        for(ll i = 0; i <= 30; i++){
            if(b & (1LL<<i)){
                index = i; 
            }
        } 
        ll aindex = 0; 
        for(ll i = 0; i <= 30; i++){
            if(a & (1LL<<i)){
                aindex = i; 
            }
        } 
        if(index > aindex){
            cout<<-1<<endl; 
        } 
        else{
            if(b > a){
                // ll total = 0LL; 
                // for(ll i = 0; i <= 30; i++){
                //     if(b & (1LL<<i)){
                //         if(!(a & (1LL<<i))){
                //             total += ((1LL<<i)); 
                //         } 
                //     } 
                // } 
                cout<<1<<endl; 
                // cout<<total<<endl; 
                cout<<(a^b)<<endl; 
            } 
            else{
                ll total = 0LL; 
                // for(ll i = 0; i < index; i++){

                // } 
                if(index == aindex){
                    cout<<1<<endl; 
                    cout<<(a^b)<<endl; 
                } 
                else{
                    cout<<2<<endl; 
                    ll temp = (a - (1LL<<aindex)); 
                    ll ans = b ^ temp; 
                    cout<<ans<<" "; 
                    cout<<(1LL<<aindex)<<endl; 
                }
                
            }
        }
    }
}