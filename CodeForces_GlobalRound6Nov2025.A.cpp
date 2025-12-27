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
        int x; cin>>x; 
        int count = 0, c = 0; 
        for(int &it : arr){
            if(it >= x){
                count = 1; 
            } 
            if(it <= x){
                c = 1; 
            } 
        } 
        if(c && count){
            cout<<"YES"<<endl; 
        } else cout<<"NO"<<endl; 
    }
}