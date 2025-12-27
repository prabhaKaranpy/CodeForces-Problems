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
        // sort(arr.begin(), arr.end()); 
        // int index = n-1; 
        // for(int i = 0; i < n; i++){
        //     if(arr[i] > k){
        //         index = i; 
        //         break; 
        //     }
        // } 
        vector<int> hash(n+1); 
        for(int i = 0; i < n; i++){
            hash[arr[i]] ++; 
        } 
        int elements = 0; 
        int found = 0; 
        for(int i = 0; i < k; i++){
            if(hash[i] == 0){
                found = 1; 
                elements ++; 
            }
        } 
        if(hash[k] == 0 && found == 0){
            found = 0; 
        } 
        else{ found = 1; }
        if(!found) cout<<0<<endl; 
        else{
            int fours = hash[k]; 
            cout<<max(elements, fours)<<endl; 
        }
    }
}