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
        int m = 2*n;  
        vector<int> arr(m+1); 
        arr[n] = n; arr[2*n] = n; 
        for(int i = 1; i <= (n-1); i++){
            arr[i] = n-i; arr[m-i] = n-i; 
        }    
        for(int i = 1; i <= m; i++) cout<<arr[i]<<" "; 
        cout<<endl; 
    }
}