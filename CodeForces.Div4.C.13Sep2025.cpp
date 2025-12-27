#include<bits/stdc++.h>
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<pair<int, int>> arr; 
        for(int i = 0; i< n; i++){
            int a, b; cin>>a>>b; 
            arr.push_back({a, b}); 
        } 
        int start = 0, pos = 0; 
        int count = 0; 
        for(auto &it : arr){
            int a = it.first, b = it.second; 
            int distance = a-start; 
            if(distance &1){
                if(pos != b) count += distance; 
                else count += (distance-1); 
            } 
            else{
                if(pos == b) count += distance; 
                else count += (distance -1); 
            } 
            start = a; pos = b; 
        } 
        count += (m - start); 
        cout<<count<<endl; 
    }
}