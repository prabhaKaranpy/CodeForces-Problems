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
        if(n == 1){
            cout<<0<<endl; continue; 
        } 
        // if(n == 2){
        //     cout<<1<<" "<<0<<endl; continue; 
        // } 
        for(int i = 0; i < (n-1); i++){
            int maxi = 0, mini = 0; 
            for(int j = i+1; j < n; j++){
                if(arr[j] < arr[i]) mini ++; 
                else if(arr[j] > arr[i]) maxi ++; 
            } 
            maxi = max(maxi, mini); 
            cout<<maxi<<" "; 
        } 
        cout<<0<<endl; 
    }
}