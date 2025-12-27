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
        ll n, x; cin>>n>>x; 
        vector<ll> a(n), b(n), c(n); 
        for(ll &it : a) cin>>it; 
        for(ll &it : b) cin>>it; 
        for(ll &it : c) cin>>it; 
        if(x == 0) cout<<"YES"<<endl; 
        else if(a[0] > x && b[0] > x && c[0] > x) cout<<"NO"<<endl; 
        else{
            ll ans = 0; 
            int aFound = 0, bFound = 0, cFound = 0; 
            for(int i = 0; i < n; i++){
                if(a[i] <= x && !aFound){
                    for(ll j = 0; j <= 30; j++){
                        if((((a[i] & (1LL<<j)) == (1LL<<j)) && ((x & (1LL<<j)) == 0))){
                            aFound = 1; 
                            break; 
                        } 
                    } 
                    if(!aFound) ans |= a[i]; 
                } 
                else aFound = 1; 
                if(b[i] <= x && !bFound){
                    for(ll j = 0; j <= 30; j++){
                        if((((b[i] & (1LL<<j)) == (1LL<<j)) && ((x & (1LL<<j)) == 0))){
                            bFound = 1; 
                            break; 
                        } 
                    } 
                    if(!bFound) ans |= b[i]; 
                } 
                else bFound = 1; 
                if(c[i] <= x && !cFound){
                    for(ll j = 0; j <= 30; j++){
                        if((((c[i] & (1LL<<j)) == (1LL<<j)) && ((x & (1LL<<j)) == 0))){
                            cFound = 1; 
                            break; 
                        } 
                    } 
                    if(!cFound) ans |= c[i]; 
                } 
                else cFound = 1;  
            } 
            if(ans == x) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl; 
            // int found = 0; 
            // int i = 0; 
            // // ans = 4; x = 4; 
            // for(ll i = 0; i <= 30; i++){
            //     if(!((ans & (1LL<<i)) ^ (x & (1LL<<i)))){
            //         continue; 
            //     } 
            //     else{
            //         found = 1; 
            //         break; 
            //     } 
            // } 
            // if(!found) cout<<"YES"<<endl; 
            // else cout<<"NO"<<endl; 
        }
    }
}