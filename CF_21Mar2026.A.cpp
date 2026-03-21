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
        int n, c, k; cin>>n>>c>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        for(int i = 0; i < n; i++){
            if(arr[i] <= c){
                if(k >= (c-arr[i])){
                    k -= (c-arr[i]); 
                    c += c; 
                } 
                else if(k > 0){
                   
                    c += arr[i]; c += k;  k = 0; 
                }
                else{
                    c += arr[i]; 
                }
            } 
            else{
                break; 
            } 
        } 
        cout<<c<<endl; 
    }
}