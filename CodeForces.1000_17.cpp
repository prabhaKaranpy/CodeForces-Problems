#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 0, 8, 9}; 
    // int maxi = 0; 
    // for(int i = 1; i < 10; i++){
    //     maxi = max(maxi, (arr[i]^arr[i-1])); 
    // } 
    // cout<<"Maxi : "<<maxi<<endl; 
    while(T--){
        int n; cin>>n; 
        n -= 1; 
        int set_bit = 0; 
        while(1){
            if(1<<set_bit == n){
                for(int i = 1; i <= (n-1); i++){
                    cout<<i<<" "; 
                } 
                cout<<0<<" "<<n<<endl; 
                break; 
            } 
            else if(1<<set_bit > n){ 
                int prev = 1<<(set_bit-1); 
                for(int i = 1; i <= (prev-1); i++){
                    cout<<i<<" "; 
                } 
                cout<<0<<" "; 
                for(int i = prev; i <= n; i++){
                    cout<<i<<" "; 
                } 
                cout<<endl; 
                break; 
            }   
            set_bit++; 
        } 
    }
}