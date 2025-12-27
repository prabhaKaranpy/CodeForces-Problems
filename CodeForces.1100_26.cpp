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
        vector<int> pref(n); pref[0] = arr[0]; 
        for(int i = 1; i < n; i++) pref[i] = pref[i-1] + arr[i]; 
        vector<int> suf(n); suf[n-1] = arr[n-1]; 
        for(int i = n-2; i >= 0; i--) suf[i] = suf[i+1] + arr[i]; 
        int ans = 0; 
        for(int i = 0; i < n-1; i++){
            int alice = pref[i]; 
            // auto bob = lower_bound(suf.rbegin(), suf.begin()+i+1, alice); 
            int index = -1; 
            int l = i+1, r = n-1; 
            while(l <= r){
                int mid = (l+r) >> 1; 
                if(suf[mid] == alice){
                    index = mid; 
                    break; 
                } 
                else if(suf[mid] > alice){
                    l = mid+1; 
                }  
                else r = mid-1; 
            }
            if(index != -1){
                ans = max(ans, (i+1 + (n-index))); 
            } 
        } 
        cout<<ans<<endl; 
    }
} 
