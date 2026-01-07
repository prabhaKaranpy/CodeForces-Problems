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
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        // sort(arr.begin(), arr.end()); 
        // vector<int> temp; 
        // for(int i= 0; i < (k-1); i++){
        //     temp.pb(arr[i]); 
        // } 
        set<int> stt(arr.begin(), arr.end()); 
        // vector<int> a; 
        // for(auto &it : stt) a.pb(it); sort(a.begin(), a.end()); 
        int ans = k-1; 
        for(int i = 0; i < (k-1); i++){
            if(stt.find(i) == stt.end()){
                ans= min(ans, i); 
                break; 
            } 
        } 
        cout<<ans<<endl; 
    }
}