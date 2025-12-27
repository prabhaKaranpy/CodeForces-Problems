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
        int found = 0; 
        int n = s.size(); 
        if(n == 1){
            cout<<1<<endl; continue; 
        }
        for(char &ch : s){
            if(ch == '*'){
                found ++; 
            } 
        } 
        if(found > 1){
            cout<<-1<<endl; continue; 
        } 
        else if(found == 1){
            int first = n; 
            int last = -1; 
            for(int i = 0; i < n; i++){
                if(s[i] == '<') last = i; 
            } 
            for(int i = n-1; i>=0; i--){
                if(s[i] == '>') first = i; 
            } 
            if(first < last){
                cout<<-1<<endl; 
                continue; 
            } 
            int index = -1; 
            for(int i = 0; i < n; i++){
                if(s[i] == '*'){
                    index = i; break; 
                } 
            } 
            if(index == 0 && (s[index+1] == '>')){
                cout<<n<<endl; 
                continue; 
            } 
            if(index == n-1 && (s[index-1] == '<')){
                cout<<n<<endl; 
                continue; 
            }
            if(s[index-1] == '<' && s[index+1] == '>') cout<<max((last+1), (n-first)) +1<<endl; 
            else cout<<-1<<endl; 
            continue; 
        }
        int first = n; 
        int last = -1; 
        for(int i = 0; i < n; i++){
            if(s[i] == '<') last = i; 
        } 
        for(int i = n-1; i>=0; i--){
            if(s[i] == '>') first = i; 
        } 
        if(first < last){
            cout<<-1<<endl; 
            continue; 
        } 
        cout<<max((last+1), (n-first))<<endl; 

    }
}