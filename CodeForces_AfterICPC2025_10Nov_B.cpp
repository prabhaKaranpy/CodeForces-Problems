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
        string s; cin>>s; 
        int found = 0; 
        if(s[0] == '1' || s[n-1] == '1'){
            cout<<-1<<endl; 
            continue; 
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                if(arr[i] == 1 || arr[i] == n){
                    found = 1; 
                    cout<<-1<<endl; 
                    break; 
                }
            } 
        } 
        if(!found){
            int first = -1, second; 
            int mini = 1e9, maxi = -1e9; 
            for(int i = 0; i < n; i++){
                if(first == -1 && s[i] == '1'){
                    mini = min(mini, arr[i]); 
                    maxi = max(maxi, arr[i]); 
                    first = i; 
                    second = i; 
                } 
                else if(s[i] == '1'){
                    mini = min(mini, arr[i]); 
                    maxi = max(maxi, arr[i]); 
                    second = i; 
                }
            } 
            if(first == -1){
                cout<<0<<endl; 
                continue; 
            }
            // int mini = min(arr[first], arr[second]); 
            // int maxi = max(arr[first], arr[second]); 
            int mmini= 1e9, mmaxi = -1e9; 
            int findex =-1, sindex = -1; 
            for(int i =0; i < first; i++){
                // mmini = min(arr[i], mmini); 
                if(arr[i] < mmini){
                    mmini = arr[i]; 
                    findex = i; 
                } 
            } 
            for(int i = second+1; i < n; i++){
                
                if(arr[i] > mmaxi){
                    mmaxi = arr[i]; 
                    sindex = i; 
                }
            } 
            if(mmini < mini && mmaxi > maxi){
                cout<<1<<endl; 
                cout<<findex+1<<" "<<sindex+1<<endl; 
                continue; 
            } 
            mmini = 1e9; mmaxi = -1e9; 
            for(int i =0; i < first; i++){
                // mmini = min(arr[i], mmini); 
                if(arr[i] > mmaxi){
                    mmaxi = arr[i]; 
                    findex = i; 
                }
            } 
            for(int i = second+1; i < n; i++){
                if(arr[i] < mmini){
                    mmini = arr[i]; 
                    sindex = i; 
                } 
            } 
            if(mmini < mini && mmaxi > maxi){
                cout<<1<<endl; 
                cout<<findex+1<<" "<<sindex+1<<endl; 
            } 
            else{
                cout<<-1<<endl; 
            }
        }
    }
}