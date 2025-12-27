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
        int n, x; cin>>n>>x; 
        vector<ll> arr(n); for(ll &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        ll summ = 0LL; 
        ll loyal = 0LL;  
        ll maxi = 0LL; 
        int l = 0, r = n-1; 
        int flag =0; 
        vector<ll> ans; 
        if(l == r){ 
            summ += arr[r]; 
            ll temp = (summ / x); 
            if(temp > loyal){
                loyal = temp; 
                maxi += arr[r]; 
                r --; 
            } 
            cout<<maxi<<endl; 
            for(ll &it : arr) cout<<it<<" "; 
            cout<<endl; 
            continue;  
        }
        while(l < r){
            summ += arr[r]; 
            ll temp = (summ / x); 
            if(temp > loyal){
                loyal = temp; 
                maxi += arr[r]; 
                ans.pb(arr[r]); 
                r --; 
            } 
            // else if(l == r){
            //     ans.pb(arr[l]); 
            //     break; 
            // }
            else{
                while(l < r){
                    summ += arr[l]; 
                    ans.pb(arr[l]); 
                    ll temp = (summ / x); 
                    if(temp > loyal){
                        loyal = temp; 
                        maxi += arr[r]; 
                        ans.pb(arr[r]); 
                        r --; l ++; 
                        break; 
                    } 
                    else{
                        
                        l ++; 
                        if(l == r){
                            flag = 1; 
                        }
                    } 
                }
            }
        } 
        if((int)(ans.size()) < n){
            summ += (arr[r]); 
            ll temp = (summ / x); 
            if((temp > loyal) && (!flag)){
                loyal = temp; 
                maxi += arr[r]; 
            }
            ans.pb(arr[r]); 
        }
        // if(l == r){
        //     ans.pb(arr[l]); 
        //     summ += arr[l]; 
        //     ll temp = (summ / x); 
        //     if(temp > loyal){
        //         maxi += arr[l]; 
        //     }
        // }
        cout<<maxi<<endl; 
        for(ll &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}
