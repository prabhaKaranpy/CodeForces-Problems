#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    // int T; cin>>T; 
    // while(T--){
        string s; cin>>s; 
        int n = s.size(); 
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                int temp = s[i]+1; 
                if(temp == 123) temp = 97; 
                else if(temp == 124) temp = 98; 
                char next = (char)(temp); 
                if((i+1 <= n-1) && (s[i+1] != next)){
                    s[i] = next; 
                }
                else if((i+1 <= n-1) && (s[i+1] == next)){
                    int temp = next+1; 
                    if(temp == 123) temp = 97; 
                    else if(temp == 124) temp = 98; 
                    next = (char)(temp); 
                    s[i] = next; 
                } 
                else{
                    s[i] = next; 
                }
            } 
        } 
        cout<<s<<endl; 
        // string t = s; 
        // vector<int> arr; arr.pb(0); 
        // for(int i = 1; i < n; i++){
        //     if(s[i] != s[i-1]){
        //         arr.pb(i); 
        //     } 
        // } 
        // int size = arr.size(); 
        // for(int i = 0; i < (size-1); i++){
        //     int gap = arr[i+1] - arr[i]; 
        //     if(gap == 1){
        //         continue; 
        //     } 
        //     else{
        //         if((gap&1)){
        //             for(int j = arr[i]+1; j <= (arr[i+1]-2); j += 2){
        //                 if(t[j] != 'z') t[j] = (char)((int)s[j]+1); 
        //                 else t[j] = 'a'; 
        //             } 
        //         } 
        //         else{
        //             for(int j = arr[i]+1; j <= (arr[i+1]-3); j += 2){
        //                 if(t[j] != 'z') t[j] = (char)((int)s[j]+1); 
        //                 else t[j] = 'a'; 
        //             } 
        //             if(s[arr[i+1]] == 'a' && s[arr[i]] == 'z') s[arr[i+1]-1] = 'b'; 
        //             else if(s[arr[i]] == 'y' && s[arr[i+1]] == 'z') s[arr[i+1]-1] = 'a'; 
        //             else if(s[arr[i]]+1 == s[arr[i+1]]) 
                    
        //         }
        //     }
        // }
        // // while(i < n){
        // //     int j = i+1; 
        // //     while(j < n && (s[j] == s[i])){
        // //         j ++; 
        // //     } 
        // // }
    // }
}