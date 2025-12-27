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
        int n, s; cin>>n>>s; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        if(n < s){
            cout<<-1<<endl; 
            continue; 
        } 
        int summ = count(arr.begin(), arr.end(), 1); 
        // cout<<"Sum : "<<summ<<endl; 
        if(summ < s){
            cout<<-1<<endl; 
            continue; 
        } 
        if(summ == s){
            cout<<0<<endl; 
            continue; 
        }
        int mini = n; 
        vector<int> pos; 
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                pos.pb(i); 
            } 
        } 
        int size = pos.size(); 
        int remaining = summ - s; 
        int left = -1, right = size-remaining; 
        for(int i = 0; i <= remaining; i++){
            // int total = (n-((((size)-(remaining-i))) <= (size-1)) ? pos[((size)-(remaining-i))] : n); 
            // if(i > 0){
            //     total += (pos[i-1]+1); 
            // } 
            int total = 0; 
            if(left >= 0){
                total += (pos[left] + 1); 
            } 
            if(right <= (size-1)){
                total += (n-pos[right]); 
            } 
            left ++; right ++; 
            mini = min(mini, total); 
        } 
        cout<<mini<<endl; 
    }
} 