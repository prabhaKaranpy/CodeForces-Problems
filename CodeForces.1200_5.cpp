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
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        if(n == 1){
            cout<<0<<endl; 
            continue; 
        }
        map<int, vector<int>> mp; 
        for(int i = 0; i < n; i++){
            mp[arr[i]].pb(i); 
        } 
        int mini = 1e9; 
        for(auto &it : mp){
            int maxi = 0; 
            vector<int> &temp = it.second; 
            // cout<<"KEY : "<<it.first<<" : "; 
            // for(auto &it : temp){
            //     cout<<it<<" "; 
            // } cout<<endl; 
            int size = temp.size(); 
            int start = -1; 
            vector<int> c; 
            for(int i = 0; i < size; i++){
                int distance = abs(temp[i] - start) -1; 
                c.pb(distance); 
                maxi = max(maxi, distance); 
                // c.pb(maxi); 
                start = temp[i]; 
            } 
            maxi = max(maxi, abs(n-start)-1); 
            c.pb(abs(n-start)-1); 
            // c.pb(maxi); 
            // for(int &it : c){
            //     cout<<it<<" "; 
            // } 
            // cout<<endl; 
            int copy = maxi-1; 
            if(copy&1) copy = (copy+1)/2; 
            else copy /= 2; 
            for(int &it : c){
                if(it == maxi){
                    it = copy; 
                    break; 
                }
            } 
            int maxii = c[0]; 
            for(int &it : c) maxii = max(maxii, it); 
            // cout<<"Copy : "<<maxii<<endl; 
            mini = min(mini, maxii); 
        }
        cout<<mini<<endl; 
    }
}
