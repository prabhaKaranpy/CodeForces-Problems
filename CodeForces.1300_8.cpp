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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> ans; 
        for(int i = 0; i < n; i++){
            int l = 1, r = i+1; 
            while(l <= r){
                int mid = (l + r) >> 1; 
                if(arr[i-mid+1] >= mid){
                    l = mid+1; 
                } 
                else{
                    r = mid-1; 
                } 
            } 
            ans.pb(r); 
        } 
        for(auto &It : ans) cout<<It<<" "; 
        cout<<endl; 
    }
}