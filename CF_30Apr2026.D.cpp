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
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        int m= 2*n; 
        vector<int> arr(m); for(int &it : arr) cin>>it; 
        int maxi = 1; 
        map<int, int> first, second; 
        for(int i = 0; i < m; i++){
            if(first.find(arr[i]) == first.end()) first[arr[i]] = i; 
        } 
        for(int i = m-1; i >= 0; i--){
            if(second.find(arr[i]) == second.end()) second[arr[i]] = i; 
        } 
        // for(auto &it : first) cout<<it.first<<" "<<it.second<<endl; 
        // for(auto &it : second) cout<<it.first<<" "<<it.second<<endl; 
        int l = first[0], r = second[0]; 
        int tl = l, tr = l; 
        while(tl >= 0 && tr < m && (arr[tl] == arr[tr])){
            tl --; tr ++; 
        } 
        tl ++; tr --; 
        set<int> stt; 
        for(int i = tl; i <= tr; i++) stt.insert(arr[i]); 
        for(int i = 0; i <= n; i++){
            if(stt.find(i) == stt.end()){
                maxi = max(maxi, i); 
                break; 
            } 
        } 
        tl = r; tr = r; 
        while(tl >= 0 && tr < m && (arr[tl] == arr[tr])){
            tl --; tr ++; 
        } 
        tl ++; tr --; 
        stt.clear(); 
        for(int i = tl; i <= tr; i++) stt.insert(arr[i]); 
        for(int i = 0; i <= n; i++){
            if(stt.find(i) == stt.end()){
                maxi = max(maxi, i); 
                break; 
            } 
        } 
        tl = l; tr = r; 
        int found = 0; 
        while(tl < tr){
            if(arr[tl] != arr[tr]){
                found = 1; break; 
            } 
            else{
                tl ++; tr --; 
            } 
        } 
        if(!found){
            tl = l; tr = r; 
            while(tl >= 0 && tr < m && (arr[tl] == arr[tr])){
                tl --; tr ++; 
            } 
            tl ++; tr --; 
            stt.clear(); 
            for(int i = tl; i <= tr; i++) stt.insert(arr[i]); 
            for(int i =0; i <= n; i++){
                if(stt.find(i) == stt.end()){
                    maxi = max(maxi, i); break; 
                } 
            }  
        } 
        cout<<maxi<<endl; 
        // int llll = l, rrrr = r; 
        // int found = 0; 
        // while(l <= r){
        //     if(arr[l] != arr[r]){
        //         found = 1; break; 
        //     } 
        //     else{
        //         l ++; r --; 
        //     }
        // }
        // if(!found){
        //     set<int> stt; for(int i= llll; i <= rrrr; i++) stt.insert(arr[i]); 
        //     for(int i = 0; i <= n; i++){
        //         if(stt.find(i) == stt.end()){
        //             maxi = max(maxi, i); 
        //             break; 
        //         }
        //     }
        // } 
        // l = first[1]; r = second[1]; 
        // // cout<<l<<" "<<r<<endl; 
        // found = 0; 
        // int lll = l, rrr = r; 
        // while(l <= r){
        //     if(arr[l] != arr[r]){
        //         found = 1; break; 
        //     } 
        //     else{
        //         l ++; r --; 
        //     }
        // }
        // // cout<<"Found : "<<found<<endl; 
        // if(found == 0){
        //     set<int> st; 
        //     for(int i= lll; i <= rrr; i++) st.insert(arr[i]); 
        //     // cout<<"H"<<endl; 
        //     // for(auto &it : st) cout<<it<<"    "; 
        //     for(int i = 0; i <= n; i++){
        //         if(st.find(i) == st.end()){
        //             maxi = max(maxi, i); 
        //             break; 
        //         }
        //     }
        // } 
        // cout<<maxi<<endl; 
    }
}