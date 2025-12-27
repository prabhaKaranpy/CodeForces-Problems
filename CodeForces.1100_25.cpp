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
        string s; cin>>s; 
        int n = s.size(); 
        vector<int> hash(26); 
        for(char &ch : s){
            hash[ch-97] += 1; 
        } 
        // for(int &it : hash) cout<<it<<" "; 
        // cout<<endl; 
        int count = 0; 
        for(int i = 0; i < 26; i++){
            if(hash[i]) count ++; 
        } 
        if(count == 1){
            cout<<"YES"<<endl; 
        } 
        else{
            int found1 = 0; 
            for(int i = 0; i < 26; i++){
                if(hash[i] > 1){
                    // cout<<"HELLO"<<endl; 
                    found1 = 1; break; 
                } 
            } 
            if(!found1) cout<<"YES"<<endl; 
            else{ 
                int found = 0; 
                for(int i = 0; i < 26; i++){
                    char ch = (char)(97 + i); 
                    if(hash[i] > 1){
                        int prev = -1; 
                        for(int j = 0; j < n; j++){
                            if(s[j] == ch){
                                prev = j; 
                                break; 
                            } 
                        } 
                        for(int j = prev+1; j < n; j++){
                            if(s[j] == ch){
                                unordered_set<char> stt; 
                                // cout<<"STT.SIZE() : "<<(int)stt.size()<<endl; 
                                for(int k = prev+1; k < j; k++){
                                    stt.insert(s[k]); 
                                } 
                                // cout<<"Count : "<<count<<endl; 
                                if((count - ((int)stt.size() + 1)) > 0){
                                    found = 1; 
                                    // cout<<"FOUND = 1"<<endl; 
                                    break; 
                                }
                                prev = j; 
                                stt.clear(); 
                            }
                        }
                    }
                    if(found) break; 
                }
                if(found == 0){
                    cout<<"YES"<<endl; 
                } 
                else cout<<"NO"<<endl; 
            }
        }
    }
}