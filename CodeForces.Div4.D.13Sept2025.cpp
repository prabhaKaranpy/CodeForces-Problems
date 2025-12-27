#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<ll> arr(n); 
        for(ll &it : arr) cin>>it; 
        ll ans = 0LL; 
        int found = 0; 
        for(ll &it : arr){
            if(it & 1LL){
                found = 1; 
                break; 
            } 
        } 
        if(!found) cout<<0<<endl;
        else{
            vector<ll> con;
            for(ll &it : arr){
                if(!(it&1LL)) ans += it; 
                else con.push_back(it); 
            } 
            ll size = con.size(); 
            sort(con.rbegin(), con.rend()); 
            if(size &1LL){
                for(int i = 0; i <= (size/2LL); i++){
                    ans += con[i]; 
                } 
            } 
            else{
                for(int i = 0; i < (size/2LL); i++){
                    ans += con[i]; 
                } 
            } 
            cout<<ans<<endl; 
        }

    }
}