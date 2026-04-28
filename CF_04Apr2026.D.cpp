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
        vector<int> arr(n); arr[0] = 2; arr[1] = 2; int odd = 3; 
        for(int i = 2; i < n; i++){
            arr[i] = odd; odd += 2; 
        } 
        for(int i = 1; i < n-1; i++){
            arr[i] *= arr[i+1]; 
        } 
        for(auto &it : arr) cout<<it<<" "; 
        cout<<endl; 
        // set<int> stt; 
        // cout<<"GCD : "<<endl; 
        // for(int i = 0; i < n-1; i++){
        //     // cout<<__gcd(arr[i], arr[i+1])<<" "; 
        //     stt.insert(__gcd(arr[i], arr[i+1])); 
        // } 
        // cout<<"Size : "<<(int)(stt.size())<<endl; 
        // cout<<endl; 
    }
}