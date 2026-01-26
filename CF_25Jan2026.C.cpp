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
        int n, q; cin>>n>>q; 
        vector<int> a(n), b(n); for(int &it : a) cin>>it; for(int &it : b) cin>>it; 
        for(int i= 0; i < n; i++){
            a[i] = max(a[i], b[i]); 
        } 
        for(int i= n-2; i >= 0; i--){
            a[i] = max(a[i], a[i+1]); 
        } 
        vector<int> pref(n); pref[0] = a[0]; 
        for(int i= 1; i < n; i++) pref[i] = pref[i-1] + a[i]; 
        for(int i= 0; i < q; i++){
            int l, r; cin>>l>>r; 
            if(l==1){
                cout<<pref[r-1]<<" "; 
            } 
            else{
                cout<<pref[r-1] - pref[l-1-1]<<" "; 
            } 
        } 
        cout<<endl; 
    }
}