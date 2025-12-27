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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end());   
        int ans = arr[0]; 
        int temp = -1; 
        for(int i = 0; i < n; i++){
            if(arr[i] != arr[0]){
                temp = arr[i]; break; 
            }
        }
        int two = temp - arr[0]; 
        cout<<max(two, ans)<<endl; 
    }
}