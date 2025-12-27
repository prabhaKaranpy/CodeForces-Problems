#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        map<int, int> mp; 
        for(int &it : arr) mp[it] ++; 
        int count = 0; 
        int found = 0; 
        for(auto &it : mp){
            count += ((it.second)); 
            if((it.second  % it.first)){
                found = 1; 
                cout<<-1<<endl; 
                break; 
            } 
        } 
        if(!found){
            if(count != n) cout<<-1<<endl; 
            else{
                vector<pair<int, int>> A; 
                for(int i = 0; i < n; i++){
                    A.push_back({arr[i], i}); 
                } 
                sort(A.begin(), A.end()); 
                count = 1; 
                vector<int> ans(n); 
                int size = A.size(); 
                int i = 0; 
                while(i < size){
                    for(int j = i; j < i+A[i].first; j++){
                        ans[A[j].second] = count; 
                    } 
                    count += 1; 
                    i = i + A[i].first; 
                } 
                for(int &it : ans) cout<<it<<" "; 
                cout<<endl; 
            }
        }
        
    }
}