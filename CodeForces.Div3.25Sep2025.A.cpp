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
        int count = 0, zero = 0; 
        for(int &it : arr){
            if(it == -1) count ++; 
            if(it == 0) zero ++; 
        } 
        count = (count & 1) ? 2 : 0; 
        cout<<zero+count<<endl; 
    }
}