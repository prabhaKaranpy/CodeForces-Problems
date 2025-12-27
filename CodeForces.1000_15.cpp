#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        string s; cin>>s; 
        int mini = n; 
        int count = 0; 
        
        for(int i = 0; i < k; i++){
            if(s[i] == 'B') count ++;  
        } 
        mini = min(mini, (k-count)); 
        if(count == k) cout<<0<<endl; // or (cout<<mini<<endl); since, mini = 0, here; 
        else{
            for(int i = k; i < n; i++){
                if(s[i-k] == 'B') count -= 1;
                if(s[i] == 'B') count += 1; 
                mini = min(mini, (k-count)); 
            } 
            cout<<mini<<endl; 
        } 
        
    }
}