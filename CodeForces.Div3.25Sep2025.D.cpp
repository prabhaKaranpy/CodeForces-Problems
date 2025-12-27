#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        string s; cin>>s; 
        int aMid, bMid; 
        int aCount = 0, bCount = 0; 
        for(char &ch : s){
            if(ch == 'a') aCount ++; 
            else{
                bCount ++; 
            }
        } 
        int a = (aCount/2); 
        if(aCount&1) a ++; 
        int b = (bCount/2); 
        if(bCount&1) b ++; 
        int copy = 0; 
        for(int i = 0; i < n; i++){
            if(s[i] == 'a') copy ++; 
            if(copy == a){
                aMid = i; 
                break; 
            }
        } 
        copy = 0; 
        for(int i = 0; i < n; i++){
            if(s[i] == 'b') copy ++; 
            if(copy == b){
                bMid = i; break; 
            } 
        }
        int amini = 0, bmini = 0; 
        int pos = aMid + 1; 
        for(int i = aMid+1; i < n; i++){
            if(s[i] == 'a'){
                amini += (abs(i-pos)); 
                pos += 1; 
            } 
        } 
        pos = aMid -1; 
        for(int i = aMid-1; i >= 0; i--){
            if(s[i] == 'a'){
                amini += (abs(i-pos)); 
                pos -= 1; 
            } 
        } 
        pos = bMid + 1; 
        for(int i = bMid+1; i < n; i++){
            if(s[i] == 'b'){
                bmini += (abs(i-pos)); 
                pos += 1; 
            } 
        } 
        pos = bMid -1; 
        for(int i = bMid-1; i >= 0; i--){
            if(s[i] == 'b'){
                bmini += (abs(i-pos)); 
                pos -= 1; 
            } 
        } 
        cout<<min(amini, bmini)<<endl; 
    }
}