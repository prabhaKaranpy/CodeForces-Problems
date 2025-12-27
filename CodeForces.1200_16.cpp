#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
// #define int long long 
signed main(void){
    prabha; 
        int n, q; cin>>n>>q; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        ll total = 0LL; for(int &it : arr) total += (ll)(it); 
        vector<int> timeStamp(n, 0); 
        pair<int, int> globalValue = {-1, -1}; 
        vector<ll> a; 
        for(int i = 1; i <= q; i++){
            int t; cin>>t; 
            if(t == 1){
                int index, x; cin>>index>>x; 
                index --; 
                if(timeStamp[index] > globalValue.second){
                    total += (x - (arr[index])); 
                    a.pb(total); 
                } 
                else{
                    total += (-globalValue.first + x); 
                    a.pb(total); 
                } 
                arr[index] = x; 
                timeStamp[index] = i; 
            } 
            else{
                int x; cin>>x; 
                total = ((ll)n * (ll)(x)); 
                a.pb(total); 
                globalValue.first = x; globalValue.second = i; 
            }
        } 
        for(ll &it : a) cout<<it<<endl; 
    // int T; cin>>T; 
    // while(T--){
        // int n, q; cin>>n>>q; 
        // vector<int> arr(n); 
        // for(int &it : arr) cin>>it; 
        // ll summ = 0LL; 
        // for(int &it : arr) summ += (ll)(it); 
        // int prev = 0; 
        // int twox; 
        // vector<ll> a; 
        // vector<int> twos(n, -1); 
        // int prevTwo = 0; 
        // int f = 0; 
        // for(int i = 0; i < q; i++){
        //     int t; cin>>t; 
        //     if(t == 1){ 
        //         int index, x; cin>>index>>x; 
                // cout<<"INDEX : "<<index<<" "<<"X : "<<x<<endl; 
                // if(prev == 0){
                //     // cout<<summ - arr[index-1] + x<<endl; 
                //     a.pb(summ - arr[index-1] + x); 
                //     summ = (summ - arr[index-1] + x); 
                //     arr[index-1] = x; 
                //     prev = 1; 
                // } 
                // else if(prev == -1){
                //     ll ans = (ll)(n-1) * (ll)(twox); 
                //     arr[index-1] = x; 
                //     twos[index-1] = x; 
                //     ans += arr[index-1]; 
                //     summ = ans; 
                //     // cout<<ans<<endl; 
                //     a.pb(ans); 
                //     prev = 1; 
                // } 
                // else if(prev == 1){ 
                //     ll ans = 0LL; 
                    
                //     if(twos[index-1] == -1 && (f == 1)){
                //         ans = summ - prevTwo + x; 
                //         summ = ans; 
                //         twos[index-1] = x; 
                //     } 
                //     else{
                //         ans = summ - (arr[index-1]) + (x); 
                //         arr[index-1] = x; summ = ans; 
                //     }
                //     // cout<<ans<<endl; 
                //     a.pb(ans); 
                //     prev = 1; 
                // }
            // } 
            // else{
                // f = 1; 
                // int x; cin>>x; 
                // prevTwo = x; 
                // ll ans = (ll)(x) * (ll)(n); 
                // // cout<<ans<<endl; 
                // a.pb(ans); 
                // prev = -1; 
                // twox = x; 
            // }
        // } 
        // for(auto &it : a) {cout<<it<<endl; }
        // cout<<endl; 
    // }
}
