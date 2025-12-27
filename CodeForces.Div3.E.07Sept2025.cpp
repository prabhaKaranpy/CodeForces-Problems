#include<bits/stdc++.h>     // THIS IS THE FIRST 'E' PROBLEM I'VE EVER SOLVED ON CODEFORCES :) 
#define ll long long 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        set<int> stt(arr.begin(), arr.end()); 
        int mex = 0; 
        for(int i = 0; i < 3e5; i++){
            if(stt.find(i) == stt.end()){
                mex = i; 
                break; 
            }
        } 
        vector<int> ans(n); 
        unordered_map<int, int> mp; 
        for(int &it : arr) mp[it] ++; 
        for(int i = 0; i < n; i++){
            if(arr[i] > mex || mp[arr[i]] > 1){
                ans[i] = mex; 
            } 
            else ans[i] = arr[i]; 
        } 
        vector<int> ans2(n); 
        stt.clear(); 
        set<int> st(ans.begin(), ans.end()); 
        for(int i = 0; i < 3e5; i++){
            if(st.find(i) == st.end()){
                mex = i; 
                break; 
            }
        } 
        mp.clear(); 
        for(int &it : ans) mp[it] ++; 
        for(int i = 0; i < n; i++){
            if(ans[i] > mex || mp[ans[i]] > 1){
                ans2[i] = mex; 
            } 
            else ans2[i] = ans[i]; 
        } 
        vector<int> ans3(n); 
        mp.clear(); 
        st.clear(); 
        for(int &it : ans2) st.insert(it); 
        for(int i = 0; i < 3e5; i++){
            if(st.find(i) == st.end()){
                mex = i; 
                break; 
            } 
        } 
        for(int &it : ans2) mp[it] ++; 
        for(int i = 0; i < n; i++){
            if(ans2[i] > mex || mp[ans2[i]] > 1){
                ans3[i] = mex; 
            } 
            else ans3[i] = ans2[i]; 
        } 
        int differ = 0; 
        int transition = 1; 

        for(int i = 0; i < n; i++){
            if(ans[i] != ans2[i]){
                transition = 2; 
                differ = 1; 
                break; 
            }
        } 
        if(!differ){
            transition = 1; 
        } 
        else{
            for(int i = 0; i < n; i++){
                if(ans3[i] != ans[i]){
                    transition = 3; 
                    differ = 1; 
                    break; 
                }
            } 
        } 
        ll summ = 0; 
        if(k == 1){
            for(int &it : ans) summ += (ll)(it); 
        } 
        else if(k == 2){
            for(int &it : ans2) summ += (ll)(it); 
        } 
        else if(k == 3){
            for(int &it : ans3) summ += (ll)(it); 
        } 
        else{
            if(transition == 1){
                for(int &it : ans) summ += (ll)(it); 
            } 
            else if(transition == 2){
                if(k&1){
                    for(int &it : ans) summ += (ll)(it); 
                } 
                else{
                    for(int &it : ans2) summ += (ll)(it); 
                } 
            }
            else if(transition == 3){
                if(k&1){
                    for(int &it : ans3) summ += (ll)(it); 
                } 
                else{
                    for(int &it : ans2) summ += (ll)(it); 
                } 
            } 
        } 
        cout<<summ<<endl; 
        // int maxi = 0; 
        // for(int i = 0; i < n; i++){
        //     maxi = max(maxi, ans[i]); 
        // } 
        // int count = 0; 
        // for(int &it : ans){
        //     if(it == maxi) count++; 
        // }
        // if(count> 1){
        //     for(int i =0; i< n; i++){
        //         if(ans[i] == maxi){
        //             ans2[i] = mex; 
        //         } 
        //         else ans2[i] = ans[i]; 
        //     }
        // } 
        // else{
        //     for(int i = 0; i < n; i++) ans2[i] = ans[i]; 
        // }
        // if(k&1){
        //     ll summ = 0; 
        //     for(int &it : ans){
        //         summ += (ll)(it); 
        //     } 
        //     cout<<summ<<endl; 
        // } 
        // else{
        //     ll summ = 0; 
        //     for(int &it : ans2) summ += (ll)(it); 
        //     cout<<summ<<endl; 
        // }
    }
}