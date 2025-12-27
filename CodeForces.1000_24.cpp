#include<bits/stdc++.h>
using namespace std; 
// int neg(int x){return -1*(x); }
// void check(int i, int j, int &n, int &m, vector<vector<int>> &arr){ 
//     int change = 0; 
//     int maxi = -1e8; 
//     int original = arr[i][j]; 
//     if(i-1 >= 0){
//         if(neg(arr[i-1][j]) + neg(original) > arr[i-1][j] + original){
            
//         }
//     } 
    
// }
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<vector<int>> arr(n, vector<int>(m)); 
        for(auto &it : arr){
            for(int &e : it) cin>>e; 
        } 
        int summ = 0, count = 0, mini = 1e2; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                // check(i, j, n, m, arr); 
                summ += abs(arr[i][j]); 
                if(arr[i][j] < 0){
                    count ++; 
                } 
                mini = min(mini, abs(arr[i][j])); 
            } 
        } 
        // cout<<mini<<endl; 
        if(count & 1){
            cout<<summ - (2 * mini)<<endl; 
        } 
        else cout<<summ<<endl; 
    } 
} 
