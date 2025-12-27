#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        string s; cin>>s; 
        unordered_map<char, int> mp;  
        for(char &ch : s) mp[ch] ++; 
        map<char, int> rollHash; 
        int maxi = 1; 
        for(int i = 0; i < n-1; i++){
            rollHash[s[i]] ++; 
            mp[s[i]] --; 
            if(!(mp[s[i]])) mp.erase(s[i]); 
            int temp = rollHash.size() + mp.size(); 
            // cout<<"Map Size : "<<mp.size()<<endl; 
            maxi = max(maxi, temp); 
        } 
        cout<<maxi<<endl; 
    }
}