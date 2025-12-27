#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        int found = 0; 
        unordered_map<int, int> mp; 
        for(int &it : arr) mp[it] ++; 
        for(auto &it : mp){
            if(it.second > 1){
                found = 1; 
                cout<<"YES"<<endl; 
                break; 
            } 
        } 
        if(!found) cout<<"NO"<<endl; 
        // int ans = 1; 
        // for(int i = 0; i < n-1; i++){
        //     ans *= arr[i]; 
        // } 
        // int two = 1; 
        // for(int i = 1; i < n; i++){
        //     two *= arr[i]; 
        // } 
        // int final = ans / two; 
        // if(ans % two) final += (ans%two); 
        // if(final == 1) cout<<"YES"<<endl; 
        // else cout<<"NO"<<endl; 
    }
}