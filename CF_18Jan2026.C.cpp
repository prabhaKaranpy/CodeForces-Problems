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
        vector<int> a(n); for(int &it : a) cin>>it; 
        set<int> stt(a.begin(), a.end()); 
        vector<int> arr; 
        for(auto &it : stt) arr.pb(it); 
        sort(arr.begin(), arr.end()); 
        int maxi = 1; 
        if(n == 1){
            cout<<1<<endl; 
            continue; 
        } 
        int ans = 1; 
        int size = arr.size(); 
        for(int i = 1; i <size; i++){
            if((arr[i]-1) == arr[i-1]){
                maxi += 1; 
            } 
            else{
                ans = max(ans, maxi); 
                maxi = 1; 
            }
        } 
        ans = max(ans, maxi); 
        cout<<ans<<endl; 
    }
}