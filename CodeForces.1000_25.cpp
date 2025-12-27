#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int  &it : arr) cin>>it; 
        unordered_map<int, int> mp; 
        for(int &it : arr) mp[it] ++; 
        int found = 0; 
        for(pair<const int, int> &it : mp){
            if(it.second > 1){
                found = 1; 
                cout<<"YES"<<endl; 
                break; 
            } 
        } 
        if(!found) cout<<"NO"<<endl; 
    }
}