#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, a, b; cin>>n>>a>>b; 
        if(n&1){
            if((b&1)){
                if(!(a&1)){
                    if(a < b) cout<<"YES"<<endl; 
                    else cout<<"NO"<<endl; 
                }
                else cout<<"YES"<<endl;  
            } 
            else cout<<"NO"<<endl; 
        } 
        else{
            if(!(b&1)){
                if(a&1){
                    if(a < b) cout<<"YES"<<endl; 
                    else cout<<"NO"<<endl; 
                }
                else cout<<"YES"<<endl; 
            } 
            else cout<<"NO"<<endl; 
        }
    }
}