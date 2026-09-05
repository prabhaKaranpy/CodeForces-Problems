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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int count = 0; 
        int ones = 0, zeros = 0; 
        for(int &it : arr){
            if(it == -1) count ++; 
            else if(it == 1) ones ++; 
            else zeros ++; 
        } 
        if(count == 0){
            for(auto &it : arr) cout<<it<<" "; 
            cout<<endl; 
            continue; 
        } 
        if(ones == 0 && count == 1){
            for(auto &it : arr){
                if(it == -1) cout<<1<<" "; 
                else cout<<it<<" "; 
            } 
            cout<<endl; 
            continue; 
        } 
        if(zeros == 0 && count == 1){
            for(auto &it : arr){
                if(it == -1){
                    if(n > 2) cout<<0<<" "; 
                    else cout<<1<<" "; 
                }
                else cout<<it<<" "; 
            } 
            cout<<endl; 
            continue; 
        } 
        if(ones == 0 && count > 1){
            // int found = -1; 
            for(auto &it : arr){
                if(it == -1){
                    it = 1; break; 
                }
            } 
            for(int i = n-1; i >= 0; i--){
                if(arr[i] == -1) {
                    arr[i] = 1; break; 
                } 
            } 
            for(auto &it : arr){
                if(it == -1) it = 0; 
            } 
            for(auto &it : arr) cout<<it<<" "; 
            cout<<endl; 
            continue; 
        } 
        vector<int> hash; 
        for(int i = 0; i < n; i++){
            if(arr[i] == 1) hash.pb(i); 
        } 
        int size = hash.size(); 
        int maxi = 1; 
        int index = -100; 
        for(int i = 1; i < size; i++){
            if((hash[i] - hash[i-1] +1) > maxi){
                index = hash[i-1]; 
                maxi = (hash[i] - hash[i-1] +1); 
            } 
        } 
        int firstNegativeOne = -1; 
        for(int i = 0; i < n; i++){
            if(arr[i] == -1){firstNegativeOne = i; break; }
        } 
        int distance = hash[0] - firstNegativeOne +1; 
        if(distance > maxi){
            maxi = distance; 
            index = -1; 
        } 
        int lastNegativeOne = -1; 
        for(int i =n; i >= 0; i--){
            if(arr[i] == -1){lastNegativeOne = i; break; } 
        } 
        distance = lastNegativeOne - hash[size-1] +1; 
        if(distance > maxi){
            maxi = distance; 
            index = -2; 
        } 
        if(index == -1){
            arr[firstNegativeOne] = 1; 
            for(int i = firstNegativeOne+1; i < hash[0]; i++){
                if(arr[i] == -1) arr[i] = 0; 
            } 
            for(auto &it : arr){
                if(it == -1) it = 1; 
            } 
            for(auto &it : arr) cout<<it<<" "; 
            cout<<endl; 
        } 
        else if(index == -2){
            arr[lastNegativeOne] = 1; 
            for(int i = hash[size-1] +1; i < lastNegativeOne; i++){
                if(arr[i] == -1) arr[i] = 0; 
            } 
            for(int &it : arr){
                if(it == -1) it = 1; 
            } 
            for(auto &it : arr) cout<<it<<" "; 
            cout<<endl; 
        } 
        else{
            for(int i = index+1; i < n; i++){
                if(arr[i] == 1) break; 
                if(arr[i] == -1) arr[i] = 0; 
            } 
            for(auto &it : arr){
                if(it == -1) it = 1; 
            } 
            for(auto &it : arr) cout<<it<<" "; 
            cout<<endl; 
        }
    }
} 