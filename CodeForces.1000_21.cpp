#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        string a, b; cin>>a>>b; 
        int n = a.size(), m = b.size(); 
        string mi, ma; 
        if(m < n){
            mi = b; 
            ma = a; 
        } 
        else{
            mi = a; ma = b; 
        }
        a = ma, b = mi; 
        n = a.size(), m = b.size(); 
        int mini = n + m; 
        // cout<<a<<"  "<<b<<endl; 
        vector<string> ans; 
        for(int i = 0; i < m; i++){
            string temp = ""; 
            for(int j = i; j < m; j++){
                temp.push_back(b[j]); 
                ans.push_back(temp); 
            } 
        } 
        for(auto &it : ans){
            int index = a.find(it); 
            if(index != string::npos){
                int size = it.size(); 
                mini = min(mini, (n+m-(2*size))); 
            } 
        } 
        cout<<mini<<endl; 
    }
}