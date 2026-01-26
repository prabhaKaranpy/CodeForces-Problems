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
        vector<int> a(n), b(n); for(int &it : a) cin>>it; for(int &it : b) cin>>it; 
        sort(a.rbegin(), a.rend()); 
        int prev = -1; 
        int maxi = 0; 
        for(int i= 0; i < n; i++){
            int temp = b[i]; 
            int cur = prev + temp; 
            if(cur >= n) break; 
            maxi= max(maxi, ((i+1) * (a[cur]))); 
            prev = cur; 
        } 
        cout<<maxi<<endl; 
    }
}