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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> total(n); 
        for(int i = 0; i < n; i++){
            vector<int> temp(n); temp[i] = 0; 
            int j = i+1; 
            int maxi = arr[(j+n-1) % n]; 
            for(int x = 1; x <= (n-1); x++){
                temp[j%n] = maxi; 
                j ++; maxi = max(maxi, arr[(j+n-1) % n]); 
            } 
            j = (i+n-1) % n; 
            maxi = arr[(j)]; 
            for(int x = 1; x <= (n-1); x++){
                temp[(j+n) % n] = min(temp[(j+n) % n], maxi); 
                j --; maxi = max(maxi, arr[(j+n) % n]); 
            } 
            int summ = accumulate(temp.begin(), temp.end(), 0LL); 
            total[i] = summ; 
        } 
        for(int &it : total) cout<<it<<" "; 
        cout<<endl; 
        // vector<int> temp(n); 
        // vector<int> total(n); 
        // for(int i =0; i < n; i++){
        //     vector<int> temp(n); 
        //     temp[i] = 0; 
        //     temp[(i+1) % n] = arr[i]; 
        //     int j = (i+1) % n; 
        //     for(int z = 1; z <= (n-2); z++){
        //         j = (j+1) % n; 
        //         temp[j] = max(temp[(j-1+n)%n], arr[(j-1+n)%n]); 
        //     }
        //     // for(int j = i+2; j < n; j++){
        //     //     temp[j] = max(temp[(j-1+n)%n], arr[(j-1+n)%n]); 
        //     // } 
        //     // reverse 
        //     int k = i-1; 
        //     if(k < 0) k += n; 
        //     temp[k] = arr[k]; 
        //     for(int z = 1; z <= (n-2); z++){
        //         if(k-1 < 0) k = k-1 + n; 
        //         else k -= 1; 
        //         int next = temp[(k+1) % n]; 
        //         if(temp[k] > arr[k] || next > arr[k]){
        //             temp[k] = min(temp[k], max(arr[k], next)); 
        //             if(next > arr[k]){
        //                 temp[(k+1)%n] = arr[k]; 
        //             }
        //         } 
        //     }
        //     int count = 0; 
        //     for(auto &it : temp) cout<<it<<" "; 
        //     cout<<endl; 
        //     for(auto &it : temp) count += it; 
        //     total[i] = count; 
        // } 
        // for(auto &it : total) cout<<it<<" "; 
        // cout<<endl; 
    }
}