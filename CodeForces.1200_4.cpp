#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        int size = (n * (n-1)) /2 ; 
        vector<int> arr(size); 
        for(int &it : arr) cin>>it; 
        unordered_map<int, int> mp; 
        vector<int> ans(n); 
        // sort(arr.rbegin(), arr.rend()); 
        for(int &it : arr) mp[it] ++; 
        vector<pair<int, int>> A; 
        for(auto &it : mp){
            A.push_back(it); 
        } 
        sort(A.begin(), A.end()); 

        int i = 0; 
        ans[n-1] = 1e9; 
        for(auto &it : A){
            int temp = it.second; 
            while(temp){
                ans[i] = it.first; 
                temp -= (n-1-i); 
                i ++; 
            } 
        } 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}