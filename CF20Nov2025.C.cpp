#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define aj "Ajisai" 
#define mai "Mai" 
#define ti "Tie" 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n), brr(n); 
        for(int &it : arr)cin>>it; 
        for(int &it : brr) cin>>it; 
        int a = 0, b= 0; 
        for(int i = 0; i < n; i++){
           if(arr[i] != brr[i]){
                if(i&1){
                    b ++; 
                }  
                else{
                    a ++; 
                } 
           } 
        }
        if(a == b){
            cout<<ti<<endl; 
            continue; 
        } 
        if(!((a+b) &1)){
            cout<<ti<<endl; 
            continue; 
        } 
        for(int i = n-1; i>= 0; i--){
            if(arr[i] != brr[i]){
                if(i &1){
                    cout<<mai<<endl; 
                    break; 
                } 
                else{
                    cout<<aj<<endl; 
                    break; 
                } 
            } 
        } 
    }
}