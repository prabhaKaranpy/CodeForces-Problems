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
        int n, s, x; cin>>n>>s>>x; 
        vector<int> arr(n); for(int &it : arr)cin>>it; 
        int sum = 0; for(int &it : arr) sum += it; 
        if(sum > s){
            cout<<"NO"<<endl; continue; 
        } 
        if(sum == s){
            cout<<"YES"<<endl; continue; 
        } 
        int rem = s - sum; 
        if(!(rem % x)){
            cout<<"YES"<<endl; continue; 
        } 
        else cout<<"NO"<<endl; 
    }
}