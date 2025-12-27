// #include<bits/stdc++.h>
// using namespace std; 
// int f(int day, int last, int &n, vector<vector<int>> &arr, vector<int> &mark, vector<vector<int>> &dp){
//     // base case
//     if(day == 3) return 0; 
//     if(dp[day][last] != -1) return dp[day][last]; 
//     int take = 0; 
//     int maxi = 0; 
//     for(int j = 0; j < n; j++){
        
//         if(!mark[j]){
//             // if(dp[day][j] != -1) return dp[day][j]; 
//             mark[j] = 1; 
//             take = arr[day][j] + f(day+1, j, n, arr, mark, dp); 
//             maxi = max(maxi, take); 
//             // dp[day][j] = maxi; 
//             mark[j] = 0; 
//         }
//     } 
//     // cout<<"R : "<<maxi<<endl; 
//     return dp[day][last] = maxi; 
// }
// int main(void){
//     int T; cin>>T; 
//     while(T--){
//         int n; cin>>n; 
//         vector<vector<int>> arr(3, vector<int> (n)); 
//         for(vector<int> &it : arr){
//             for(int &e : it) cin>>e; 
//         } 
//         // for(int i = 0; i < 3; i++){
//         //     for(int j = 0; j < n; j++){
//         //         cout<<arr[i][j]<<"  "; 
//         //     } cout<<endl; 
//         // }
//         vector<int> mark(n); 
//         int maxi = 0; 
//         vector<vector<int>> dp(3, vector<int> (n+1, -1)); 
//         // for(int i = 0; i < n; i++){
//         //     mark[i] = 1; 
//         //     maxi = max(maxi, arr[0][i] + f(1, n, arr, mark, dp)); 
//         //     // cout<<"M : "<<maxi<<endl; 
//         //     mark[i] = 0; 
//         // } 
//         // for(auto &it : dp){
//         //     for(auto &e : it) cout<<e<<" "; 
//         //     cout<<endl; 
//         // }
//         maxi = f(0, n, n, arr, mark, dp); 
//         for(auto &it : dp){
//             for(auto &e : it) cout<<e<<" "; 
//             cout<<endl; 
//         }
//         cout<<maxi<<endl; 
//     }
// }


#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<int>> arr(3, vector<int>(n)); 
        for(auto &it : arr){
            for(int &e : it) cin>>e; 
        } 
        vector<vector<pair<int, int>>> top_pos; 
        for(auto &it : arr){ 
            vector<pair<int, int>> temp; 
            for(int i = 0; i < n; i++){
                temp.push_back({it[i], i}); 
            } 
            sort(temp.begin(), temp.end()); 
            reverse(temp.begin(), temp.end()); 
            vector<pair<int, int>> temp2; 
            temp2.push_back(temp[0]); temp2.push_back(temp[1]); temp2.push_back(temp[2]); 
            top_pos.push_back(temp2); 
        } 
        int maxi = 0; 
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(top_pos[0][i].second != top_pos[1][j].second){
                    for(int k = 0; k < 3; k++){
                        if((top_pos[2][k].second != top_pos[1][j].second) && (top_pos[2][k].second != top_pos[0][i].second)){ 
                            maxi = max(maxi, (top_pos[2][k].first + top_pos[1][j].first + top_pos[0][i].first)); 
                        } 
                    }
                }
            }
        } 
        cout<<maxi<<endl; 
    }
}