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
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        int l = 0, r = 1; 
        int found = 0; 
        while(r < n){
            if(arr[l] + k == arr[r]){
                cout<<"YES"<<endl; 
                found =1; 
                break; 
            } 
            if(arr[l] + k < arr[r]){
                l ++; 
            } 
            else{
                r ++; 
            }
        }
        if(!found) cout<<"NO"<<endl; 
    }
}
