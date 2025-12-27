#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
ll f(ll n){
    return ((n * (n+1)) / 2LL); 
}
signed main(void){
    int T; cin>>T; 
    while(T--){
        int k, n; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        
        unordered_map<int, int> mp; 
        
        int found = 0; 
        for(auto &it : arr) mp[it] ++; 
        for(auto &it : mp){
            if(it.second % k){
                found = 1; 
                break; 
            } 
        } 
        
        if(found) cout<<0<<endl; 
        else{
            unordered_map<int, int> count; 
            unordered_map<int, int> rolling; 
            ll ans = 0LL; 
            int prev = 0; 
            map<int, vector<int>> start; 
            for(int i = n-1; i >= 0; i--) start[arr[i]].push_back(i); 
            for(auto &it : mp){
                count[it.first] = (it.second / k); 
            } 
            int l = 0, r = -1; 
            int i = 0; 
            int grindPoint = 0; // reducing pre-computed indexes; 
            while(i < n){
                rolling[arr[i]] ++; 
                if(rolling[arr[i]] > count[arr[i]]){
                    ll len = (r-l+1); 
                    ans += (f(len) - len); 
                    // cout<<"len : "<<f(len) - len<<endl; 
                    // l = i-(k-1); r = i; 
                    ans -= ((f(grindPoint-l+1) - (grindPoint-l+1))); 
                    grindPoint = i-1; 
                    // cout<<"GrindPoint : "<<grindPoint<<endl; 
                    l = start[arr[i]].back()+1; 
                    for(int k = prev; k <= l-1; k++){
                        start[arr[k]].pop_back(); 
                        rolling[arr[k]] --; 
                    }
                    prev = l; 
                    // rolling[arr[i]] --; 
                    r = i; 
                    i ++; 

                    // rolling.clear(); 
                    // for(auto it : rolling) cout<<it.first<<" : "<<it.second<<endl; 
                    // for(int z = l; z <= r; z++) rolling[arr[z]] ++; 
                    // for(auto &it : rolling) cout<<it.first<<" : "<<it.second<<endl; 
                    // cout<<endl; 
                    // ans -= (f(k-1) - (k-1)); 
                    // rolling[arr[i]] = 0; 
                }
                else{
                    r ++; 
                    i ++; 
                }
                // for(auto &it : rolling) cout<<it.first <<" : "<<it.second<<endl; 
                // cout<<endl; 
            } 
            ll len = (n-1) -l+1; 
            ans += (f(len) - len); 
            ans -= (f(grindPoint-l+1) - (grindPoint-l+1)); 
            ans += n; 
            cout<<ans<<endl; 
        }
    }
}