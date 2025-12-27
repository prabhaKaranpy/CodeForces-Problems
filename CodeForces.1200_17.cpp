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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        ll ans = 0LL; 
        ll goods = 0LL; 
        sort(arr.begin(), arr.end()); 
        for(int i = 0; i < n; i++){
            goods += arr[i]; 
            ll add = i+1; 
            ll days = (x-goods); 
            if(days >= 0){
                ans += (days / add) +1LL; 
            } 
            else{
                break; 
            } 
        } 
        cout<<ans<<endl; 
    }
}