#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        vector<pair<int, int>> A; 
        for(int i = 0; i < n; i++){
            A.push_back({arr[i], i}); 
        } 
        sort(A.begin(), A.end()); 
        reverse(A.begin(), A.end()); 
        vector<pair<int, int>> B; 
        int even = 1, count = 1; 
        for(auto &it : A){
            if(even){
                B.push_back({it.second, count}); 
                even ^= 1; 
            } 
            else{
                B.push_back({it.second, -count}); 
                even ^= 1; 
                count ++; 
            } 
        } 
        vector<int> ans(n+1); 
        for(auto &it : B){
            ans[it.first + 1] = it.second; 
        } 
        ans[0] = 0; 
        ll time = 0LL; 
        for(int i = 1; i <= n; i++){
            time += (2LL * (ll)abs((ans[i])) * (ll)(arr[i-1])); 
        } 
        cout<<time<<endl; 
        for(int &it : ans){
            cout<<it<<" "; 
        } 
        cout<<endl; 
    }
}