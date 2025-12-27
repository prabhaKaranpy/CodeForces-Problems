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
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        ll ans = 0LL; 
        for(int i = 0; i < n; i++){
            for(int j = n-1; j > (i+1); j--){
                int l = i+1, r = j-1; 
                int x = arr[j] - arr[i]; 
                int x2 = arr[n-1] - (arr[i]+arr[j]); 
                auto ub = upper_bound((arr.begin()+l), (arr.begin()+r+1), x); 
                auto ub2 = upper_bound(arr.begin()+l, (arr.begin()+r+1), x2); 
                if((ub != arr.end()) && (ub2 != arr.end())){
                    int index = max((ub - arr.begin()), (ub2-arr.begin())); 
                    ll len = (j-index); 
                    ans += len; 
                }  
            }  
        } 
        cout<<ans<<endl; 
    }
}