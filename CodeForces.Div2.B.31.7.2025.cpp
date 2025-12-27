#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, s; cin>>n>>s; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        int ones = 0, twos = 0, zeros = 0; 
        for(int &it : arr){
            if(it == 0) zeros ++; 
            else if(it == 1) ones ++; 
            else twos ++; 
        } 
        vector<int> ans(n); 
        for(int i = zeros; i < (zeros+twos); i++){
            ans[i] = 2; 
        } 
        for(int i = (zeros + twos); i < n; i++) ans[i] = 1; 
        int summ = 0; 
        for(int &it : arr) summ += it; 
        if(summ > s){
            for(int &it : ans){
                cout<<it<<" "; 
            } 
            cout<<endl; 
        }
        else{
            if(s - summ == 1){
                for(int &it : ans){
                    cout<<it<<" "; 
                } 
                cout<<endl; 
            } 
            else{
                cout<<-1<<endl; 
            }
        }
    }
}