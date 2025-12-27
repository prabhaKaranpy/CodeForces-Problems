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
        map<int, int> mp; for(int &it : arr) mp[it] ++; 
        int mini = 0;
        int m = mp.size(); 
        int i = 0; 
        vector<pair<int, int>> A; 
        for(auto &it : mp){
            A.pb({it.second, it.first}); 
        } 
        sort(A.begin(), A.end()); 
        for(auto &it : A){
            mini = max(mini, (m-(i)) * it.first); 
            i ++; 
        } 
        cout<<mini<<endl; 
    }
}