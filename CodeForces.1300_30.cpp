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
    // int T; cin>>T; 
    // while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int summ = 0; 
        int total = 0; 
        for(int i = 0; i < k; i++){
            summ += arr[i]; 
        } 
        total = summ; 
        int l = 0; 
        for(int i = k; i < n; i++){
            summ += arr[i]; summ -= arr[l]; l ++; 
            total += summ; 
        }
        float ans = (float)(total) / (float)(n-k+1); 
        cout<<fixed<<setprecision(6)<<ans<<endl; 
    // }
}