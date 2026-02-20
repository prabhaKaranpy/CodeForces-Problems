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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<pair<int, int>> A; 
        for(int i =0; i < n; i++){
            A.pb({arr[i], i}); 
        } 
        sort(A.begin(), A.end()); 
        int count = 0; 
        int summ = 0LL; 
        vector<int> ansIndices; 
        for(auto &it : arr) summ += it; 
        for(int i = n-1; i >= 0; i--){
            if(i == n-1){
                int remaining = summ - A[i].first - A[i-1].first; 
                if(A[i-1].first == remaining){ 
                    count ++; 
                    ansIndices.pb(A[i].second); 
                } 
            }
            else{
                int remaining = summ - A[i].first - A[n-1].first; 
                if(A[n-1].first == (remaining)){
                    count ++; 
                    ansIndices.pb(A[i].second); 
                }
            }
        } 
        cout<<count<<endl; 
        for(auto &it : ansIndices) cout<<(it+1)<<" "; 
        cout<<endl; 
    // }
}