#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<int>> arr; 
        for(int i = 0; i < n; i++){
            int a, b; cin>>a>>b; 
            arr.push_back({a, b}); 
        } 
        vector<vector<int>> original = arr; 
        sort(arr.begin(), arr.end()); 
        vector<vector<int>> ans, ans2; 
        ans.push_back(arr[0]); 
        ans2.push_back(arr[0]); 
        for(int i = 1; i < n; i++){
            int first = arr[i][0], second = arr[i][1]; 
            if(first < ans.back()[1]){
                ans.back()[1] = max(ans.back()[1], second); 
                if(ans2.back()[0] == first){
                    ans2.back()[1] = max(ans2.back()[1], second); 
                }
                else{
                    ans2.push_back(arr[i]); 
                }
            } 
            else{
                ans.push_back(arr[i]); 
                ans2.push_back(arr[i]); 
            }
        } 
        int size = ans2.size(); 
        cout<<size<<endl; 
        vector<int> res; 
        for(int i = 0; i < size; i++){
            // cout<<ans[i][0]<<" "<<ans[i][1]<<endl; 
            for(int j = 0; j < n; j++){
                if(original[j][0] == ans2[i][0] && original[j][1] == ans2[i][1]){
                    res.push_back(j+1); 
                    break; 
                }
            }
        } 
        sort(res.begin(), res.end()); 
        for(int &it : res) cout<<it<<" "; 
        cout<<endl; 
        
    }
}