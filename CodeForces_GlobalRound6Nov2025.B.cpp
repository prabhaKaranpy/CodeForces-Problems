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
        int even = 0; 
        int first = -1, second = -1; 
        for(int i = 0; i < n; i++){
            if(!(arr[i] &1)){
                even ++; 
                if(first == -1) first = arr[i]; 
                else second = arr[i]; 
            }
            if(even == 2) break; 
        }
        if(even == 2){
            cout<<first<<" "<<second<<endl; 
            continue; 
        }
        vector<int> ans; 
        for(int &it : arr){
            if(it &1) ans.pb(it); 
        } 
        
        // int small = ans[0]; 
        // vector<int> copy(ans); 
        // for(int &it : ans){
        //     if(it == small) continue; 
        //     it = it % small; 
        // }

    }
}