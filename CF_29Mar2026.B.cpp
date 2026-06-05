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
        int count = 0; 
        for(int i = 0; i < n; i++){
            if(arr[i] <= (i+1)){
                count ++; 
            }
        } 
        cout<<count<<endl; 
        // vector<int> starting, ending; 
        // for(int i = 0; i < n; i++){
        //     if(arr[i] <= i+1){
        //         starting.pb(i+1); ending.pb(n); 
        //     } 
        //     else{
        //         starting.pb(i+1); ending.pb(arr[i]-1); 
        //     } 
        // } 
        // int size = starting.size(); 
        // int maxi = 1; int mini = n; 
        // for(int i = size-1; i >= 0; i--){
        //     mini = min(mini, ending[i]); 
        //     int temp = mini -starting[i] +1; 
        //     maxi = max(maxi, temp); 
        // } 
        // cout<<maxi<<endl; 
        // sort(starting.begin(), starting.end()); sort(ending.begin(), ending.end()); 
        // for(int &it : starting){
        //     // auto lb = lower_bound(ending.begin(), ending.end(), it); 
        // }
    }
}