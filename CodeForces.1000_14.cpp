#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        if(n == 1){
            cout<<-1<<endl; 
        }
        else{
            int found = 0; 
            unordered_map<int, int> mp; 
            for(int &it : arr){
                mp[it] ++; 
            } 
            for(auto &it : mp){
                if((it.second == 1)){
                    found = 1; 
                    break; 
                } 
            } 
            if(!found){
                vector<int> ans; 
                int index = 0; 
                int prev = arr[0]; 
                int i = 1; 
                while(i < n){
                    if(arr[i] != prev){
                        int j = i-1; 
                        for(int z = index+2; z <= j+1; z++) ans.push_back(z); 
                        ans.push_back(index+1); 
                        index = i; 
                        prev = arr[i]; 
                        i ++; 
                    }
                    else i++; 
                } 
                for(int z = index+2; z <= n; z++) ans.push_back(z); 
                ans.push_back(index+1); 
                for(auto &it : ans) cout<<it<<" "; 
                cout<<endl; 
            }
            else cout<<-1<<endl; 
            // int copy = arr[0]; 
            // for(int i = 0; i < n; i++){
            //     if(arr[i] == copy) count ++; 
            // } 
            // if(count == n){
            //     for(int i = 2; i <= n; i++) cout<<i<<" "; 
            //     cout<<1<<endl; 
            // } 
            // else cout<<-1<<endl; 
            // if(arr[0] != arr[1]){
            //     cout<<-1<<endl; 
            // } 
            // else{
            //     // for(int i = n-1; i >= 0; i--){
            //     //     cout<<arr[i]<<" "; 
            //     // } 
            //     cout<<endl; 
            // }
        }
    }
}