#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        string s; cin>>s; 
        int count = 0; 
        for(int i = n-1; i >= 0; i--){
            if(s[i] == ')'){
                count ++; 
            } 
            else{
                count --; 
                count = max(0, count); 
            } 
        } 
        cout<<count<<endl; 
    }
}
