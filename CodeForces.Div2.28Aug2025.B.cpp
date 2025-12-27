#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        string s; cin>>s; 
        int i = 0; 
        int count = 0; 
        int found = 0; 
        while(i < n){
            if(s[i] == '1'){
                int j = i; 
                while(j < n){
                    if(s[j] == '1'){
                        j ++; 
                        count ++; 
                    } 
                    else{
                        if(count >= k){
                            found = 1; 
                            cout<<"NO"<<endl; 
                            break; 
                        } 
                        else{
                            count = 0; 
                            i = j+1; 
                            break; 
                        }
                    }
                } 
                if(found) break; 
                if(count >= k){
                    found = 1; 
                    cout<<"NO"<<endl; 
                    break; 
                }
                else count = 0; 
                
                i = j+1; 
            } 
            else i ++; 
        } 
        if(!found){
            int count = 1; 
            vector<int> arr(n); 
            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    arr[i] = count; 
                    count ++; 
                }
            } 
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    arr[i] = count; 
                    count ++; 
                } 
            } 
            cout<<"YES"<<endl; 
            for(int &it : arr) cout<<it<<" "; 
            cout<<endl; 
        }
    }
}