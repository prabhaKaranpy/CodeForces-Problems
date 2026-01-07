#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define endl "\n"
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> cost(m); for(int &it : cost) cin>>it; 
        sort(arr.rbegin(), arr.rend()); 
        int j = 0; 
        int summ = 0LL; 
        for(int i = 0; i < n; i++){
            int temp = arr[i]; 
            if(cost[arr[i]-1] > cost[j]){
                summ += (cost[j]); j ++; 
            } 
            else{ 
                    summ += (cost[arr[i]-1]); 
            } 
        } 
        cout<<summ<<endl; 
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// #define pb push_back
// #define endl "\n"
// #define int long long 
// #define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
// constexpr ll mod = 998244353;
// signed main(void){
//     prabha;
//     int T; cin>>T; 
//     while(T--){
        
//     }
// }