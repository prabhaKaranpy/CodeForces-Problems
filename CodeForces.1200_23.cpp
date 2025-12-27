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
        set<string> stt; 
        for(int i = 0; i < n; i++){
            string temp; 
            for(int j = i; j < n; j++){
                temp.pb(s[j]); 
                stt.insert(temp); 
            } 
        } 
        int found = 0; 
        // for(auto &it : stt) cout<<it<<endl; 
        for(char ch = 'a'; ch <= 'z'; ch ++){
            string t; t.pb(ch); 
            // cout<<"T : "<<t<<endl; 
            if(stt.find(t) == stt.end()){
                cout<<ch<<endl; 
                found = 1; 
                break; 
            }
        } 
        if(!found){
            for(char ch = 'a'; ch <= 'z'; ch ++){
                string temp; temp.pb(ch); 
                for(char i = 'a'; i <= 'z'; i ++){
                    temp.pb(i); 
                    if(stt.find(temp) == stt.end()){
                        found = 1; 
                        cout<<temp<<endl; 
                        break; 
                    } 
                    temp.pop_back(); 
                } 
                if(found) break; 
            } 
        }
        if(!found){
            for(char ch = 'a'; ch <= 'z'; ch ++){
                string temp; temp.pb(ch); 
                for(char i = 'a'; i <= 'z'; i++){
                    temp.pb(i); 
                    for(char j = 'a'; j <= 'z'; j++){
                        temp.pb(j); 
                        if(stt.find(temp) == stt.end()){
                            found = 1; 
                            cout<<temp<<endl; 
                            break; 
                        } 
                        temp.pop_back(); 
                    } 
                    temp.pop_back(); 
                    if(found) break; 
                } 
                if(found) break; 
            } 
        } 

        // int found = 0; 
        // for(int i = 0; i < 26; i++){
        //     // string temp = ""; 
        //     for(int j = 0; j < 26; j++){
        //         string temp = ""; 
        //         for(int z = 0; z < i; z++){
        //             temp.pb((char)(97+j)); 
        //         } 
        //         for(int k = 0; k < 26; k++){
        //             temp.pb((char)(97+k)); 
        //             // cout<<temp<<" "; 
        //             // if(stt.find(temp) == stt.end()){
        //             //     found = 1; 
        //             //     cout<<temp<<endl; 
        //             //     break; 
        //             // } 
        //             temp.pop_back(); 
        //         } 
        //         if(found) break; 
        //     }
        //     if(found) break; 
        // }
        // if(!found){
        //     for(int i = 1; i <= 1001; i++){
        //         cout<<'a'; 
        //     } cout<<endl; 
        // } 
    }
}