#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int a, b, c, d; cin>>a>>b>>c>>d; 
        int found = 0; 
        int maxi = max(a,b); 
        int mini = min(a,b); 
        if((2*mini)+2 < maxi){
            found = 1; 
            cout<<"NO"<<endl; 
        } 
        else{
            if((2*min(c-a, d-b) + 2) < max(c-a, d-b)){
                found = 1; cout<<"NO"<<endl; 
            } 
            else{
                cout<<"YES"<<endl; 
            }
        }
    }
}