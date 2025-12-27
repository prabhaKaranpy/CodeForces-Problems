#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        string s; cin>>s; 
        vector<int> arr(n+1); 
        for(int i = 0; i < n; i++){
            if(s[i] == '1') arr[i+1] = i+1; 
        } 
        int count = 0; 
        int i = 0; 
        int found = 0; 
        while(i < n){
            if(s[i] == '0'){
                count = 0; 
                int j = i; 
                while(j < n){
                    if(s[j] == '0'){
                        count += 1; 
                        j ++;  
                    } 
                    else{
                        i = j; 
                        break; 
                    } 
                } 
                if(count == 1){
                    found = 1; 
                    cout<<"NO"<<endl; 
                    break; 
                }
                i = j; 
            } 
            else i ++; 
        } 
        // if(count )
        if(!found){ 
            int prev = -1; 
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){prev = i+1; break; }
            }
            if(prev == -1){
                cout<<"YES"<<endl; 
                for(int i = 1; i <= n; i++) cout<<arr[i]<<" "; 
                cout<<endl;
            } 
            else{
                // for(int i = prev; i <= n; i++){
                //     if(arr[i] != 0){
                //         int index = i-1; 
                //         int num = prev; 
                //         for(int j = index; j >= prev; j--){
                //             arr[j] = num; 
                //             num += 1; 
                //         } 
                //     }
                // }
                int i = 0; 
                vector<int> temp; 
                while(i < n){
                    if(s[i] == '0'){
                        
                        int j = i; 
                        int count = 0; 
                        while(j < n){
                            if(s[j] == '0'){
                                
                                temp.pb(j+1); 
                                j ++; 
                            } 
                            else{
                                int size = temp.size(); 
                                for(int z = size-1; z >= 0; z--){
                                    arr[temp[z]] = temp[size-1-z]; 
                                } 
                                i = j; 
                                temp.clear(); 
                                break; 
                            } 
                        } 
                        i = j; 
                    } 
                    else i ++; 
                } 
                if(temp.size() > 0){
                    int size = temp.size(); 
                    for(int z = size-1; z >= 0; z--){
                        arr[temp[z]] = temp[size-1-z]; 
                    } 
                }
                cout<<"YES"<<endl; 
                for(int i = 1; i <= n; i++) cout<<arr[i]<<" "; 
                cout<<endl; 
            }
        }
    }
}