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
        int found = 0; 
        int index = -1; 
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]){
                found = 1; 
                index = i; 
                break; 
            } 
        } 
        if(!found){
            cout<<"NO"<<endl; 
        } 
        else{
            cout<<"YES"<<endl; 
            cout<<index+1<<" "<<index<<endl; 
            for(int i = index+1; i < n; i++){
                if(arr[i] == arr[index]){
                    cout<<index-1+1<<" "<<i+1<<endl; 
                } 
                else{
                    cout<<index+1<<" "<<i+1<<endl; 
                } 
            } 
            for(int i = 0; i < index-1; i++){
                if(arr[i] == arr[index]){
                    cout<<index-1+1<<" "<<i+1<<endl; 
                } 
                else{
                    cout<<index+1<<" "<<i+1<<endl; 
                }
            }
        }
    }
}