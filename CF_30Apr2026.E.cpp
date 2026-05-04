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
        int ans = 0; 
        int maxi = 0; 
        int m = arr[n-1], index = n-1; 
        for(int i = n-2; i >= 0; i--){
            if(arr[i] < m){
                maxi = max(maxi, ((index-i)-1)); 
                m = arr[i]; index = i; 
            }
        } 
        maxi = max(maxi, (index)); 
        int mini = arr[n-1]; 
        for(int i =n-2; i >= 0; i--){
            if(arr[i] > mini){
                ans += (arr[i] - mini); 
            } 
            mini =min(mini, arr[i]); 
        } 
        cout<<ans+maxi<<endl; 
    }
}