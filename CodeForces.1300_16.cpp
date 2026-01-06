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
        int n, w; cin>>n>>w; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        map<int, int> mp; 
        for(int &it : arr) mp[it] ++; 
        vector<pair<int, int>> A; 
        for(auto &it : mp){
            A.pb(it); 
        } 
        sort(A.begin(), A.end()); 
        reverse(A.begin(), A.end()); 
        // for(auto &it : A){
        //     cout<<it.first<<" "<<it.second<<endl; 
        // }
        // int total = 0; 
        // for(auto &it : A){
        //     total += (it.first * it.second); 
        // } 
        // cout<<"Total : "<<total<<endl; 
        // cout<<"Allocation : "<<(5 * 944)<<endl; 
        int count = 0; 
        int height = 0; 
        int width = w; 
        int found = 0; 
        while(count < n){
            for(auto &it : A){
                if(it.second == 0) continue; 
                int potentialEnd = it.second; 
                for(int i = 0; i < potentialEnd; i++){
                    if(it.first <= width){
                        width -= it.first; 
                        count ++; 
                        it.second --; 
                    } 
                    else{
                        break; 
                    }
                } 
                if(width == 0 || count == n){
                    width = w; 
                    height ++; 
                    found = 1; 
                }
                if(found){
                    // found = 0; 
                    break; 
                }
            }
            if(!found){
                height ++; 
                width = w; 
            }
            if(found) found ^= 1; 
        } 
        cout<<height<<endl; 
    }
}