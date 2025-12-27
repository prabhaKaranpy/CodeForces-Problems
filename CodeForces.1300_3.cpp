#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        if(n == 1){
            cout<<"NO"<<endl; 
        } 
        else{ 
            int found = 0; 
            int pref = 0; 
            map<int, int> mp; 
            mp[0] = -1; 
            for(int i = 0; i < n; i++){
                if(i&1){
                    pref += arr[i]; 
                    if(!mp.count(pref)) mp[pref] = i; 
                } 
                else{
                    pref -= arr[i]; 
                    if(!mp.count(pref)) mp[pref] = i; 
                } 
                if(mp.count(pref)){
                    if(i-mp[pref] > 1){
                        found = 1; 
                        break; 
                    } 
                } 
            } 
            if(found) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl; 
            // int prefEven = 0, prefOdd = 0; 
            // map<int, int> mpOdd, mpEven; 
            // mpOdd[0] = -1; mpEven[0] = -1; 
            // for(int i = 0; i < n; i++){
            //     if(i&1){
            //         prefOdd += arr[i]; 
            //         if(!mpOdd.count(prefOdd)){
            //             mpOdd[prefOdd] = i; 
            //         } 
            //     } 
            //     else{
            //         prefEven += arr[i]; 
            //         if(!mpEven.count(prefEven)){
            //             mpEven[prefEven] = i; 
            //         } 
            //     } 
            //     if(prefOdd > prefEven){
            //         if(mpOdd.count(prefOdd-prefEven)){
            //             if(i-mpOdd[prefOdd-prefEven]){
            //                 found = 1; 
            //                 break; 
            //             }
            //         }
            //     } 
            //     else{
            //         if(mpEven.count(prefEven-prefOdd)){
            //             if(i-mpEven[prefEven-prefOdd]){
            //                 found = 1; 
            //                 break; 
            //             }
            //         }
            //     }
            // }
            // if(found) cout<<"YES"<<endl; 
            // else cout<<"NO"<<endl; 
            // vector<int> prefOdd(n), prefEven(n); 
            // prefEven[0] = arr[0]; 
            // prefOdd[1] = arr[1];       
            // map<int, int> mp; 
            // for(int i = 2; i < n; i++){
            //     if(i&1){
            //         prefOdd[i] = arr[i] + prefOdd[i-2]; 
            //     } 
            //     else{
            //         prefEven[i] = arr[i] + prefEven[i-2]; 
            //     } 
            // } 
            // for(int i = n-1; i >= 0; i--){
            //     mp[((i&1) ? prefOdd[i] : prefEven[i])] = i; 
            // }
            // mp[0] = -1; 
            // int maxi = 0;  
            // for(int i = 0; i < n; i++){
            //     if(mp.count(((i&1) ? prefOdd[i] : prefEven[i]))){
            //         maxi = max(maxi, i-mp[((i&1) ? prefOdd[i] : prefEven[i])]); 
            //     }
            // } 
            // if(maxi) cout<<"YES"<<endl; 
            // else cout<<"NO"<<endl; 
        }
    }
}