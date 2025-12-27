#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){ 
        ll n; cin>>n; 
        ll mult = 1; 
        ll copy = n; 
        vector<ll> elements; 
        while(copy){
            ll temp = copy % 10LL; 
            if(temp) elements.push_back(temp); 
            if(temp) mult = (mult * (temp)) / __gcd(mult, temp); 
            copy /= 10LL; 
        } 
        // if(T == 1) mult = 15120; 
        if(!(n % mult)){
            cout<<n<<endl; 
        } 
        else{ 
            ll ans = n+1LL; 
            ll end = 2520LL; // LCM(1, 2, 3, 4, 5, 6, 7, 8, 9); 
            for(ll i = n+1LL; i <= (n+1LL+end); i++){
                int found = 0; 
                ll copy = i; 
                while(copy){
                    ll temp = copy % 10LL; 
                    if(temp){ 
                        if(i % temp){
                            found = 1; 
                            break; 
                        } 
                    } 
                    copy /= 10LL; 
                } 
                if(!found){
                    ans = i; 
                    break; 
                }
            } 
            cout<<ans<<endl; 
            // ll div = n / mult; 
            // // cout<<mult<<endl; 
            // ll end = ((div+1LL)*(mult)); 
            // // cout<<end<<endl; 
            // ll ans = n; 
            // for(ll i = n+1LL; i <= end; i++){
            //     cout<<i<<endl; 
            //     int found = 0; 
            //     for(auto &it : elements){
            //         if(i % it){
            //             found = 1; 
            //             break; 
            //         } 
            //     } 
            //     if(!found){
            //         ans = i; 
            //         break; 
            //     }
            // }
            // cout<<ans<<endl; 
            // cout<<"Check : "<<((div+1LL)*(mult))%mult<<endl; 
        }
    }
}