#include<bits/stdc++.h>
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> order(n); for(int i = 0; i < n; i++) order[i] = i+1; 
        set<int> stt(arr.begin(), arr.end()); 
        vector<int> remaining; 
        for(int i = n; i >= 1; i--){
            if(stt.find(i) == stt.end()) remaining.push_back(i); 
        } 
        // reverse(remaining.begin(), remaining.end()); 
        int j = 0; 
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                arr[i] = remaining[j++]; 
            } 
        } 
        // for(int &it : arr) cout<<it<<"  "; 
        // cout<<endl; 
        int first = -1, second = -1; 
        for(int i = 0; i < n; i++){
            if(arr[i] != order[i]){
                first = i; 
                break; 
            }
        } 
        for(int i = n-1; i >= 0; i--){
            if(arr[i] != order[i]){
                second = i; 
                break; 
            }
        } 
        if(first + second > 0) cout<<second - first + 1<<endl; 
        else cout<<0<<endl; 
    }
}