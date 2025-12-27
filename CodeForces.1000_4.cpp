#include<bits/stdc++.h> 
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<int>> arr; 
        for(int i = 0; i < n; i++){
            int m; cin>>m; 
            vector<int> temp(m); 
            for(int &it : temp) cin>>it; 
            arr.push_back(temp); 
        } 
        for(vector<int> &it : arr){
            sort(it.begin(), it.end()); 
        } 
        sort(arr.begin(), arr.end()); 
        // for(auto &it : arr){
        //     for(auto &e : it) cout<<e<<"  "; 
        //     cout<<endl; 
        // }    
        ll summ = (ll)arr[0][0]; 
        for(vector<int> &it : arr){
            summ += (ll)(it[1]); 
        } 
        ll maxi = 0; 
        for(int i = 0; i < n; i++){
            maxi = max(maxi, (summ - (ll)arr[i][1])); 
        } 
        cout<<maxi<<endl; 
    }
}

// #include<bits/stdc++.h>
// using namespace std; 
// int main(void){
//     int T; cin>>T; 
//     while(T--){
//         int n; cin>>n; 
//         vector<vector<int>> arr; 
//         for(int i = 0; i < n; i++){
//             int m; cin>>m; 
//             vector<int> temp(m); 
//             for(int &it : temp) cin>>it; 
//             arr.push_back(temp); 
//         } 
//         for(vector<int> &it : arr){
//             sort(it.begin(), it.end()); 
//         } 
//         sort(arr.begin(), arr.end()); 
//         // for(auto &it : arr){
//         //     for(auto &e : it) cout<<e<<"  "; 
//         //     cout<<endl; 
//         // }
//         int mini = 1e8; 
//         int summ = 0; 
//         for(int i = 0; i < n; i++){
//             summ += (arr[i][0]); 
//         } 
//         mini = min(mini, summ); 
//         int index = 0; 
//         int maxi = 0; 
//         for(int i = 0; i < n; i++){
//             if(arr[i][1] - arr[i][0] >= maxi){
//                 maxi = arr[i][1] - arr[i][0]; 
//                 index = i; 
//             } 
//         } 
//         if(n == 1) cout<<arr[0][0]<<endl; 
//         else{
//             if(index == 0){
//                 int ans = arr[0][0]; 
//                 for(int i = 0; i < n; i++){
//                     if(i != 1) ans += arr[i][1]; 
//                 } 
//                 cout<<ans<<endl; 
//             } 
//             else{
//                 int ans = arr[0][0]; 
//                 for(int i = 1; i < n; i++){
//                     ans += (arr[i][1]); 
//                 } 
//                 cout<<ans<<endl; 
//             }
//         }
//     }
// }

