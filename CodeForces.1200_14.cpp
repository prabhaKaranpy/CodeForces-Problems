#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
void check(int i, int j, vector<vector<char>> &arr, int &ones, int &zeros, int &n){
    if(arr[i][j] == '1') ones ++; 
    else zeros ++; 
    if(arr[j][n-1-i] == '1') ones ++; 
    else zeros ++; 
    if(arr[n-1-i][n-1-j] == '1') ones ++; 
    else zeros ++; 
    if(arr[n-1-j][i] == '1') ones ++; 
    else zeros ++; 
    return; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<char>> arr(n, vector<char>(n)); 
        for(auto &it : arr){
            for(char &ch : it) cin>>ch; 
        } 
        int total = 0; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int ones = 0, zeros = 0; 
                check(i, j, arr, ones, zeros, n); 
                total += min(ones, zeros);   
            }
        } 
        cout<<(total/4)<<endl; 
    }
}