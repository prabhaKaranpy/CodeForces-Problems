#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int f(int i, int j, int n, vector<vector<int>> &arr){
    int sum = 0; 
    if(i-1 >= 0) sum += arr[i-1][j]; 
    if(i+1 < n) sum += arr[i+1][j]; 
    if(j-1 >= 0) sum += arr[i][j-1]; 
    if(j+1 < n) sum += arr[i][j+1]; 
    return sum; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        int k = 1; 
        vector<vector<int>> arr(n, vector<int> (n)); 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] = k; 
                k ++; 
            }
        } 
        int maxi = 1; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                maxi = max(maxi, (arr[i][j]+f(i, j, n, arr))); 
            }
        } 
        cout<<maxi<<endl; 
    }
}