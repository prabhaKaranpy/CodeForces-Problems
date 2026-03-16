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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> maxi(n); maxi[0] = arr[0]; 
        for(int i = 1; i < n; i++){
            maxi[i] = max(maxi[i-1], arr[i]); 
        } 
        int count = 0; 
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == maxi[i]){
                count ++; 
            }
        } 
        cout<<count<<endl; 
    }
}