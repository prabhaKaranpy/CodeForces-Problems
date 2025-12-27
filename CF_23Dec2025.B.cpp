#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        ll summ = 0LL; 
        for(int i= 1; i < n; i++){
            summ += abs(arr[i] - arr[i-1]); 
        } 
        // cout<<"Summ : "<<summ<<endl; 
        ll mini = summ; 
        for(int i = 0; i < n; i++){
            if(i == 0){
                ll temp = summ - abs(arr[i] - arr[i+1]); mini = min(mini, temp); 
            } 
            else if(i == n-1){
                ll temp = summ - abs(arr[i] - arr[i-1]); 
                mini = min(mini, temp); 
            } 
            else{
                ll temp = summ - abs(arr[i]-arr[i-1]) - abs(arr[i] - arr[i+1]); 
                temp += (abs(arr[i-1]-arr[i+1])); 
                mini = min(temp, mini); 
            }
        } 
        cout<<mini<<endl; 
    }
}