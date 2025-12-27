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
        int prev = -1; 
        int l = 0, r = n-1; 
        int found = 0; 
        while(l <= r){
            if(arr[l] == arr[r]){
                l ++; r--; 
            } 
            else{
                if((prev == -1) || (arr[r] == prev)){
                    prev = arr[r]; 
                    r--; 
                }
                else if(arr[l] == prev){
                    l ++; 
                }
                else{
                    found = 1; 
                    // cout<<"NO"<<endl; 
                    break; 
                }
            }
        } 
        if(found){
            l = 0; r = n-1; found = 0; prev = -1; 
            while(l <= r){
                if(arr[l] == arr[r]){
                    l ++; r --; 
                } 
                else{
                    if((prev == -1) || (arr[l] == prev)){
                        prev = arr[l]; 
                        l ++; 
                    } 
                    else if(arr[r] == prev) r --; 
                    else{
                        found = 1; break; 
                    } 
                } 
            } 
        }
        if(!found) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl; 
    }
}