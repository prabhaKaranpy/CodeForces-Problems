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
        string s; cin>>s; 
        string copy = s; 
        reverse(copy.begin(), copy.end()); 
        int open = 0, closed = 0; 
        for(char &ch : s){
            if(ch == '(') open ++; 
            else closed ++; 
        } 
        if((open-closed) != 0){
            cout<<-1<<endl; 
            continue; 
        } 
        int color = 1; 
        stack<pair<int, int>> stt; // pair.first = value, pair.second = index; 
        vector<int> arr(n, 2); 
        for(int i = 0; i < n; i++){
            if(s[i] == '(') stt.push({s[i], i}); 
            else if(s[i] == ')'){
                if(!stt.empty()){
                    arr[i] = 1; 
                    int index = stt.top().second; 
                    stt.pop(); 
                    arr[index] = 1; 
                } 
            } 
        } 
        int one = 0, two = 0; 
        for(auto &it : arr){
            if(it == 1) one ++; 
            else two ++; 
        } 
        int count = 1; 
        if(one > 0 && two > 0) count = 2; 
        // else count = 1; 
        if(count == 1){
            for(auto &it : arr) it = 1; 
        }

        stack<pair<int, int>> st; // pair.first = value, pair.second = index; 
        vector<int> ar(n, 2); 
        for(int i = 0; i < n; i++){
            if(copy[i] == '(') st.push({copy[i], i}); 
            else if(copy[i] == ')'){
                if(!st.empty()){
                    ar[i] = 1; 
                    int index = st.top().second; 
                    st.pop(); 
                    ar[index] = 1; 
                } 
            } 
        } 
        int one1 = 0, two1 = 0; 
        for(auto &it : ar){
            if(it == 1) one1 ++; 
            else two1 ++; 
        } 
        int count1 = 1; 
        if(one1 > 0 && two1 > 0) count1 = 2; 
        // else count = 1; 
        if(count1 == 1){
            for(auto &it : ar) it = 1; 
        }

        if(count <= count1) {cout<<count<<endl; 
        for(auto &it : arr) cout<<it<<" "; 
        cout<<endl; }
        else{
            cout<<count1<<endl; 
            for(auto &it : ar) cout<<it<<" "; 
            cout<<endl; 
        }
    }
}