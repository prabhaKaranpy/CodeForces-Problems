#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n, q; cin>>n>>q; 
        vector<int> arr(n); 
        vector<int> query(q); 
        for(int &it : arr) cin>>it; 
        for(int &it : query) cin>>it; 
        vector<int> ans(arr); 
        int prev = 31; 
        for(int i = 0; i < q; i++){
            if(query[i] < prev){
                prev = query[i]; 
                int num = 1 << query[i]; 
                for(int j = 0; j < n; j++){
                    if(!(ans[j] % num)) ans[j] += (num >> 1); 
                }
            }
        } 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
} 
