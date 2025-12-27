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
        sort(arr.begin(), arr.end()); 
        int found = 0; 
        ll prefix = 0LL; 
        for(int i = 0; i < n; i++){
            if(((i == 0) ? 1LL : prefix) < (ll)arr[i]){
                found = 1; 
                cout<<"NO"<<endl; 
                break; 
            } 
            prefix += (ll)arr[i]; 
        } 
        if(!found) cout<<"YES"<<endl; 
    }
}