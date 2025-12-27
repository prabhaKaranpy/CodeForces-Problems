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
        int mini = 1e9; 
        for(int &it : arr) mini = min(mini, abs(it)); 
        int count = 0; 
        ll summ = 0LL; 
        for(int &it : arr){
            if(it < 0) count ++; 
            summ += abs((ll)(it)); 
        } 
        if(count &1){
            cout<<summ-(2LL*(ll)mini)<<endl; 
        } 
        else cout<<summ<<endl; 
    }
}