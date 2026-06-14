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
        int k = 1; 
        sort(arr.begin(), arr.end()); 
        int maxi = arr[n-1], mini = arr[0]; int diff = maxi - mini; 
        cout<<diff+1<<endl; 
    }
}