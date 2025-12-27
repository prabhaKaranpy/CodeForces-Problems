#include<bits/stdc++.h>
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int first = 0, second = 0; 
        int l = 0, m = 0, r = 0; 
        int found = 0; 
        for(int i = 0; i <= n-3; i++){
            l += arr[i]; 
            m = 0; 
            for(int j = i+1; j <= n-2; j++){
                m += arr[j]; 
                r = 0; 
                for(int k = j+1; k <= n-1; k++){
                    r += arr[k]; 
                }
                if(l%3 != m%3 && m%3 != r%3 && r%3 != l%3){
                    found = 1; 
                    first = i+1; second = j+1; 
                    break; 
                } 
                else if(l%3 == m%3 && l%3 == r%3 && r%3 == m%3){
                    found = 1; 
                    first = i+1; second = j+1; 
                    break; 
                }
            } 
            if(found) break; 
        } 
        cout<<first<<" "<<second<<endl; 
    }
}