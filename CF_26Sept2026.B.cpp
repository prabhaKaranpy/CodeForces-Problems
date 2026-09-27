#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        // vector<int> t; 
        int maxi = 0; 
        for(int i = 0; i <= 1001; i++){
            if(i > 0){
                for(int &e : arr){
                    // unordered_set<int> stt; 
                    int x = e; 
                    // while(1){
                    //     if(stt.find(x) != stt.end()){
                    //         // cout<<(int)(stt.size())<<endl; 
                    //         // cout<<x<<endl; 
                    //         t.pb(x); 
                    //         break; 
                    //     }
                    //     // cout<<x<<"  "; 
                    //     stt.insert(x); 
                        vector<int> temp; 
                        while(x){
                            temp.pb(x%10); 
                            x /= 10; 
                        } 
                        x = 0; 
                        for(auto &it : temp) x += (it * it); 
                        e = x; 
                    // }
                }
            }
            int count = 0; 
            unordered_map<int, int> mp; 
            
            for(int &it : arr) mp[it] ++; 
            // for(auto &it : mp){
            //     cout<<it.first<<" : "<<it.second<<endl; 
            // }
            // cout<<endl; 
            for(auto &it : mp){
                count += ((it.second * (it.second-1))/2LL); 
            } 
            // cout<<count<<endl; 
            maxi = max(maxi, count); 
        } 
        cout<<maxi<<endl; 
    }
}