#include<bits/stdc++.h>
#define int long long
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int d; cin>>d; 
        int i = d+1LL; 
        
        while(1){
            int found = 0; 
            for(int j = 2LL; (j*j) <= i; j++){
                if(!(i % j)){
                    found = 1; 
                    break; 
                }
            } 
            if(!found){
                int p = i; 
                int k = p+d; 
                while(1){
                    int found2 = 0; 
                    for(int j = 2LL; (j*j) <= k; j++){
                        if(!(k % j)){
                            found2 = 1; 
                            break; 
                        }
                    } 
                    if(!found2){
                        int q = k; 
                        found2 = 2LL; 
                        found = 2LL; 
                        // cout<<p<<"  "<<q<<endl; 
                        cout<<min(p * p * p, p * q)<<endl; 
                        break; 
                    } 
                    k ++; 
                }
                if(found == 2LL) break; 
            }
            i++; 
        } 
    }
}