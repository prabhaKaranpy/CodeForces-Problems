#include<bits/stdc++.h>
using namespace std; 
bool isPrime(int &n){
    for(int i = 3; (i * i) <= n; i++){
        if(!(n % i)) return false; 
    } 
    return true; 
}
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        if(!(n & 1)) cout<<(n/2)<<" "<<(n/2)<<endl; 
        else{
            if(isPrime(n)) cout<<1<<" "<<(n-1)<<endl; 
            else{
                int i = 3; 
                int first, second; 
                while(1){
                    if(!(n % i)){
                        first = i; 
                        break; 
                    } 
                    i += 2; 
                } 
                second = n / first; 
                cout<<second<<" "<<((first-1)*second)<<endl; 
            }
        }
    }
}