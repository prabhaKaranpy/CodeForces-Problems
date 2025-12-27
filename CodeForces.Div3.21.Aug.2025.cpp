#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n; cin>>n; 
        ll copy = n; 
        ll count = 0LL; 
        ll a = n % 10LL; 
        vector<ll> ans; 
        while(copy){
            count += 1LL; 
            copy /= 10LL; 
        } 
        ll end = 1; 
        for(int i = 1; i <= count; i++){
            end *= 10; 
        }
        // if(count & 1LL) cout<<0<<endl; 
        // else{
            for(ll i = 10; i <= (end); i*=10){
                ll temp = i+ 1LL; 
                if((n % temp) == 0LL){
                    ans.push_back(n/temp); 
                }  
            } 
            if(ans.size() > 0){    
                cout<<ans.size()<<endl; 
                sort(ans.begin(), ans.end()); 
                for(auto &it : ans) cout<<it<<" "; 
                cout<<endl; 
            } 
            else cout<<0<<endl; 
        // }
        // n /= 10LL; 
        // int found = 0; 
        // while(n){
        //     ll temp = n % 10LL; 
        //     if(temp != a){
        //         found = 1; 
        //         break; 
        //     }
        //     else count ++; 
        //     n /= 10LL; 
        // } 
        // if(count & 1){
        //     cout<<0<<endl; 
        // } 
        // else if(found){
        //     cout<<0<<endl; 
        // } 
        // else{
        //     vector<ll> ans; 
            
        //     ll end = count/2LL; 
        //     ll temp = 0LL;  
        //     ll num = copy % 10LL; 
        //     for(ll i = 0; i < end; i++){
        //         temp = temp * 10LL + num; 
        //     } 
        //     ans.push_back(temp); 
        //     for(ll i = 2; i < end; i++){
        //         if((count % i) == 0LL){
        //             ll times = (count / i); 
        //             if(((times - 1LL)& 1LL)){
        //                 ll temp = 0LL; 
        //                 for(ll z = 1; z <= (times-1LL); z++){
        //                     if(z & 1LL){
        //                         for(ll k = 1; k <= i; k++){
        //                             temp = temp * 10 + (num); 
        //                         } 
        //                     } 
        //                     else{
        //                         for(ll k = 1; k <= i; k++){
        //                             temp = temp * 10 + (0LL); 
        //                         } 
        //                     } 
        //                 } 
        //                 ans.push_back(temp); 
        //             }
        //         }
        //     } 
        //     temp = 0; 
        //     for(ll k = 1; k < count; k++){
        //         if(k & 1LL){
        //             temp = temp * 10 + (num); 
        //         } 
        //         else temp = temp * 10 + (0); 
        //     }
        //     if(count != 2) ans.push_back(temp); 
        //     cout<<ans.size()<<endl; 
        //     sort(ans.begin(), ans.end()); 
        //     for(auto &it : ans){
        //         cout<<it<<" "; 
        //     } 
        //     cout<<endl; 
        // }
    }
}