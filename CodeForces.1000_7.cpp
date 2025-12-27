#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n), brr(n); 
        for(int &it : arr) cin>>it; 
        for(int &it : brr) cin>>it; 
        unordered_map<int, int> aHash, bHash; 
        for(int &it : arr) aHash[it] = 1; 
        for(int &it : brr) bHash[it] = 1; 
        vector<vector<int>> total, b_total; 
        int i = 0; 
        while(i < n-1){
            if(arr[i] == arr[i+1]){
                vector<int> temp; 
                temp.push_back(arr[i]); 
                int j = i+1; 
                while(j < n){
                    if(arr[j-1] != arr[j]){
                        break; 
                    } 
                    temp.push_back(arr[j]); 
                    j++; 
                } 
                total.push_back(temp); 
                i = j; 
            } else i++; 
        }
        total.push_back({arr[n-1]}); 
        i = 0; 
        while(i < n-1){
            if(brr[i] == brr[i+1]){
                vector<int> temp; 
                temp.push_back(brr[i]); 
                int j = i+1; 
                while(j < n){
                    if(brr[j-1] != brr[j]) break; 
                    temp.push_back(brr[j]); 
                    j++; 
                } 
                b_total.push_back(temp); 
                i = j; 
            } else i++; 
        }
        b_total.push_back({brr[n-1]}); 
        for(auto &it : total){
            aHash[it[0]] = max(aHash[it[0]], (int)it.size()); 
        } 
        for(auto &it : b_total){
            bHash[it[0]] = max(bHash[it[0]], (int)it.size()); 
        } 
        int maxi = 1; 
        for(auto &it : aHash){
            int temp = it.second + bHash[it.first]; 
            maxi = max(maxi, temp); 
        } 
        for(auto &it : bHash){
            int temp = it.second + aHash[it.first]; 
            maxi = max(maxi, temp); 
        } 
        cout<<maxi<<endl; 
    }
}