#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; char c; cin>>n>>c; 
        string s; cin>>s; 
        s.append(s); 
        n = 2*n; 
        // vector<int> hash(n); 
        // for(int i = 0; i < n; i++){
        //     if(s[i] == 'g') hash[i] = 1; 
        // } 
        // for(auto &it : hash) cout<<it<<" "; 
        // cout<<endl; 
        int maxi = 0; 
        // cout<<"String s : "<<s<<endl; 
        int prev = n-1; 
        for(int i = n-1; i >= (n/2); i--){
            if(s[i] == 'g') prev = i; 
        } 
        for(int i = (n/2)-1; i >= 0; i--){
            if(s[i] == 'g') prev = i; 
            if(s[i] == c){ 
                maxi = max(maxi, (prev-i));  
                // auto it = lower_bound(hash.begin()+i, hash.end(), 1); 
                // cout<<"INDEX : "<<(it-hash.begin())<<endl; 
                // cout<<"I : "<<i<<endl; 
                // auto index = (int)(it-hash.begin()) - i; 
                // maxi = max(maxi, index); 
            } 
            
        } 
        cout<<maxi<<endl; 
    }
}