#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        vector<int> pref(n); 
        pref[0] = arr[0]; 
        for(int i = 1; i < n; i++){
            pref[i] = max(arr[i], pref[i-1]); 
        } 
        vector<int> suf(n); 
        suf[n-1] = arr[n-1]; 
        for(int i = n-2; i >= 0; i--){
            suf[i] = min(arr[i], suf[i+1]); 
        } 
        vector<int> ans(n); 
        ans[n-1] = pref[n-1]; 
        for(int i = n-2; i >= 0; i--){
            ans[i] = pref[i]; 
            if(suf[i+1] < ans[i]){
                ans[i] = max(ans[i], ans[i+1]); 
            } 
        } 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}
