#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        // int zeros = accumulate(arr.begin(), arr.end(), 0); 
        int zeros = 0; for(int &it : arr) if(it == 0) zeros ++; 
        if(zeros == n){
            for(int i= 0; i < n; i++) cout<<(i+1)<<" "; 
            cout<<endl; 
            continue; 
        }
        vector<int> ans; ans.pb(1); 
        vector<int> setBits(30); 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 30; j++){
                // cout<<(arr[i] & (1<<j))<<endl; 
                setBits[j] += (((arr[i] & (1 << j)) == 0) ? 0 : 1); 
            }
        } 
        // cout<<"SetBits "<<endl; 
        // for(auto &it : setBits) cout<<it<<" "; 
        // cout<<endl; 
        for(int k = 2; k <= n; k++){
            int count = 0; 
            for(int j = 0; j < 30; j++){
                if(!(setBits[j] % k)) count ++; 
            } 
            if(count == 30) ans.pb(k); 
        } 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}
