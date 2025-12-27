#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> setbits(31); // 0 -> 30 [inclusive]; 
        int ans = 0LL; 
        for(int i = 0; i < n; i++){
            int temp = arr[i]; 
            for(int j = 0; j < 31; j++){
                if(temp & (1 << j)){
                    setbits[j] ++; 
                } 
            } 
        } 
        // int last = -1; 
        for(int i = 30; i >= 0; i--){
            int bits = setbits[i]; 
            int requiredBits = n - bits; 
            if(requiredBits == 0){
                ans += (1<<i); 
            }
            else if(requiredBits > 0 && (k-requiredBits >= 0)){ // requiredBits > 0 (condition) is not need here, as already checked in above if condition..
                k -= requiredBits; 
                ans += (1<<i); 
            } 
            // else{
            //     last = i; break; 
            // }
        } 
        // if(last == -1){
        //     cout<<ans<<endl; continue; 
        // } 
        // for(int i = last; i >= 0; i--){
        //     int bits = setbits[i]; 
        //     int requiredBits = n - bits; 
        //     if(requiredBits > 0 && k-requiredBi)
        // } 
        cout<<ans<<endl; 
    }
}
