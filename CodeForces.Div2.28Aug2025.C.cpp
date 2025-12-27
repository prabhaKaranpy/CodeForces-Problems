// #include<bits/stdc++.h>
// #define ll long long 
// using namespace std; 
// int main(void){
//     int T; cin>>T; 
//     while(T--){
//         int n; cin>>n; 
//         vector<int> arr(n); 
//         for(int &it : arr) cin>>it; 
//         unordered_map<int, int> mp; 
//         unordered_map<int, int> start; 
//         mp[arr[0]] = max(mp[arr[0]], mp[arr[0]]+1); 
//         if(arr[0] != 1) start[arr[0]] = 0; 
//         vector<int> dp(n); 
//         if(mp[arr[0]] == arr[0]) dp[0] = mp[arr[0]]; 
//         if(arr[0] == 1) mp[arr[0]] = 0; 
//         for(int i = 1; i < n; i++){ 
//             mp[arr[i]] ++; 
//             if(mp[arr[i]] == 1) start[arr[i]] = i; 
//             if(mp[arr[i]] == arr[i]){
//                 if(start[arr[i]]-1 >= 0) dp[i] = max(dp[i-1], mp[arr[i]] + dp[start[arr[i]]-1]); 
//                 else dp[i] = max(dp[i-1], mp[arr[i]]); 
//                 mp[arr[i]] = 0; 
//             } 
//             else dp[i] = dp[i-1]; 
//         } 
//         cout<<dp[n-1]<<endl; 
//         // mp.clear(); 
//         // vector<int> dp2(n); 
//         // mp[arr[n-1]] ++; 
//         // if((mp[arr[n-1]] % arr[n-1]) == 0) dp2[n-1] = mp[arr[n-1]]; 
//         // for(int i = n-2; i >= 0; i--){
//         //     mp[arr[i]] ++; 
//         //     if((mp[arr[i]] % arr[i]) == 0){
//         //         dp2[i] = max(dp2[i+1], mp[arr[i]]); 
//         //     } 
//         // } 
//         // int maxi = 0; 
//         // for(int i = 0; i < n-1; i++){ 
//         //     maxi = max(dp[i], dp2[i+1]); 
//         // } 
//         // cout<<maxi<<endl; 
//     }
// }
#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        unordered_map<int, int> mp; 
        unordered_map<int, vector<int>> start; 
        for(int i = n-1; i >= 0; i--){
            start[arr[i]].push_back(i); 
        } 
        mp[arr[0]] = max(mp[arr[0]], mp[arr[0]]+1); 
        // if(arr[0] != 1) start[arr[0]] = 0; 
        vector<int> dp(n); 
        if(mp[arr[0]] == arr[0]) dp[0] = mp[arr[0]]; 
        if(arr[0] == 1) mp[arr[0]] = 0; 
        if(arr[0] == 1) start[arr[0]].pop_back(); 
        for(int i = 1; i < n; i++){ 
            mp[arr[i]] ++; 
            // if(mp[arr[i]] == 1) start[arr[i]] = i; 
            if(mp[arr[i]] == arr[i]){
                if(start[arr[i]].back()-1 >= 0) dp[i] = max(dp[i-1], mp[arr[i]] + dp[start[arr[i]].back()-1]); 
                else dp[i] = max(dp[i-1], mp[arr[i]]); 
                mp[arr[i]] --; 
                start[arr[i]].pop_back(); 
            } 
            else dp[i] = dp[i-1]; 
        } 
        // for(int &it : dp) cout<<it<<" "; 
        // cout<<endl; 
        cout<<dp[n-1]<<endl; 
    }
}