#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int a, b; cin>>a>>b; 
        int xxor = 0; 
        int count = a; 
        // for(int i = 0; i < a; i++){
        //     xxor ^= i; 
        // } 
        if(((a-1) % 4) == 0){
            xxor = (a-1); 
        } 
        else{
            int start = ((a-1) / 4); 
            start = (start* 4); 
            for(int i = start; i < a; i++){
            xxor ^= i; 
            } 
        } 
        if(xxor == b){
            cout<<count<<endl; 
        } 
        else{
            if((xxor ^ b) == a) cout<<count+2<<endl; 
            else cout<<count+1<<endl; 
        }
    }
}