#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int n; cin>>n; 
    string s; cin>>s; 
    int found = 0; 
    int first = 0, second = 0; 
    for(int i = 1; i < n; i++){
        if(s[i] < s[i-1]){
            found = 1; 
            char temp = s[i]; 
            s[i] = s[i-1]; 
            s[i-1] = temp; 
            first = i-1; 
            second = i; 
            break; 
        } 
    } 
    if(!found){
        cout<<"NO"<<endl; 
    } 
    else{
        cout<<"YES"<<endl; 
        cout<<first+1<<" "<<second+1<<endl; 
    }
}