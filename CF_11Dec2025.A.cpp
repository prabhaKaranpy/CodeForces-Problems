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
        vector<int> a(arr); 
        if(n == 1){
            cout<<0<<endl; continue; 
        }
        int maxi = arr[0]; 
        for(int i = 1; i < n; i++){
            maxi = max(maxi, arr[i]); 
            arr[i] = maxi; 
        } 
        int count = 0; 
        for(int i= 0; i< n; i++){
            if(a[i] != arr[i]) count ++; 
        } 
        cout<<count<<endl; 
    }
}