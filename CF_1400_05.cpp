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
        int n, m; cin>>n>>m; 
        vector<int> arr(n), b(n); arr[0] = 1; 
        for(int i = 1; i < n; i++) cin>>arr[i]; 
        for(int &it : b) cin>>it; 
        int count = 0; 
        sort(arr.begin(), arr.end()); 
        sort(b.begin(), b.end()); 
        int j = n-1; 
        for(int i = n-1; i >= 0; i--){
            if(arr[i] >= b[j]){
                count ++; 
                continue; 
            }
            else{
                j --; 
            }
        } 
        cout<<count<<endl; 
    }
}