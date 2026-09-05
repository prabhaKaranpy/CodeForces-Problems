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
        int count = 0; 
        for(auto &it : arr){
            if(it == 0) count ++; 
        } 
        if(count == 1){
            cout<<"NO"<<endl; 
            continue; 
        } 
        cout<<"YES"<<endl; 
        if(count == 0){
            cout<<"ABC"; 
            for(int i = 3; i < n; i++) cout<<"A"; 
            cout<<endl; 
            continue; 
        } 
        vector<char> hash(n); 
        int first = -1; 
        for(int i = 0; i < n; i++){
            if(arr[i] == 0 && first == -1){
                hash[i] = 'A'; 
                first = 0; 
            } 
            else if(arr[i] == 0 && first == 0){
                hash[i] = 'B'; 
            } 
            else if(arr[i] != 0) hash[i] = 'C'; 
        } 
        for(auto &it : hash) cout<<it; 
        cout<<endl; 
    }
}