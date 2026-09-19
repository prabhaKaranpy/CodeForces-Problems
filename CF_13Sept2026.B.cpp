#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        // int maxi = -1e15; 
        // for(int i = m-1; i < n; i++){
        //     maxi 
        // } 
        // int maxi = -1e7, index = -1; 
        // for(int i = m-1; i < n; i++){
        //     // maxi = max(maxi, arr[i]); 
        //     if(arr[i] >= maxi){
        //         maxi = arr[i]; 
        //         index = i; 
        //     } 
        // } 
        // maxi = m * maxi; // formulae : -E(bi) from i = 0 to m-1 + (m * bm); here bm is the maxi... b0 = 0; 
        // priority_queue<int, vector<int>, greater<int>> pq; 
        // for(int i = 0; i < index; i++){
        //     pq.push(arr[i]); 
        // } 
        // int z = m-1; 
        // while(z--){
        //     maxi += (-(pq.top())); pq.pop(); // m-1 minimum elements 
        // } 
        // cout<<maxi<<endl; 

        // WANT TO SLIDE OVER ALL THE bm IN ORDER TO FIND THE MAXIMUM VALUE... 
        if(n == 1){
            cout<<arr[0]<<endl; 
            continue; 
        }
        if(m == 1){
            cout<<*max_element(arr.begin(), arr.end())<<endl; 
            continue; 
        }
        priority_queue<int> pq; // max_heap 
        int summOfMminus1Elements = 0; 
        for(int i = 0; i < m-1; i++){
            pq.push(arr[i]); 
            summOfMminus1Elements += arr[i]; 
        } 
        int maxi = -1e15; 
        for(int i = m-1; i < n; i++){
            int bm = arr[i]; 
            maxi= max(maxi, ((m * bm) + (-(summOfMminus1Elements)))); // since, b0 = 0; 
            if(arr[i] < pq.top()){
                summOfMminus1Elements -= pq.top(); summOfMminus1Elements += arr[i]; 
                pq.pop(); pq.push(arr[i]); 
            } 
        } 
        cout<<maxi<<endl; 
    }
}