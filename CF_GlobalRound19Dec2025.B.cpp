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
        string s = ""; 
        deque<char> dq; 
        vector<string> arr; 
        for(int i = 0; i < n; i++){
            string temp; cin>>temp; arr.pb(temp); 
        } 
        if(n == 1){ cout<<arr[0]<<endl; continue; }
        s.append(arr[0]); 
        for(auto &ch : s) dq.push_back(ch); 
        for(int i = 1; i < n; i++){
            string temp = arr[i]; 
            char first = dq[0]; 
            if(first < temp[0]){
                for(auto &ch : temp) dq.pb(ch); 
            }
            else{
                int size = dq.size(), tempsize = temp.size(); 
                int found = 0; 
                int end = min(size, tempsize); 
                int ff = 0; 
                for(int j = 0; j < end; j++){
                    if(temp[j] < dq[j]){
                        ff = 1; break; 
                    }
                    if(temp[j] > dq[j]){
                        found = 1; 
                        break; 
                    } 
                } 
                if(ff){
                    for(int j = tempsize-1; j >= 0; j--){
                        dq.push_front(temp[j]); 
                    }
                    continue; 
                }
                if(found){
                    for(auto &ch : temp) dq.pb(ch); 
                } 
                else{
                    int fff = 0; 
                    string one(dq.begin(), dq.end()); 
                    for(auto &it : temp) one.pb(it); 
                    string two; 
                    for(auto &it : temp) two.pb(it); 
                    for(auto &it : dq) two.pb(it); 
                    int x = one.size(); 
                    for(int z = 0; z < x; z++){
                        if(one[z] != two[z]){
                            if(one[z] < two[z]){
                                for(auto &it : temp) dq.pb(it); 
                            } 
                            else{
                                for(int j = tempsize-1; j >= 0; j--){
                                    dq.push_front(temp[j]); 
                                }
                            }
                            fff = 1; 
                            break; 
                        }
                    }
                    if(!fff){
                        for(auto &it : temp) dq.pb(it); 
                    }
                    // if(tempsize <= size){
                    //     if(tempsize == size){
                    //         for(int j = tempsize-1; j >= 0; j--){
                    //             dq.push_front(temp[j]); 
                    //         }
                    //         continue; 
                    //     }
                    //     int f = 0; 
                    //     for(int k = tempsize; k < size; k++){
                    //         if(temp[k%tempsize] > dq[k]){
                    //             f = 1; break; 
                    //         }
                    //         else if(temp[k%tempsize] < dq[k]){
                    //             break; 
                    //         }
                    //     }
                    //     if(f){ 
                    //         for(auto &ch : temp) dq.pb(ch); 
                    //     }
                    //     else{
                    //         for(int j = tempsize-1; j >= 0; j--){
                    //             dq.push_front(temp[j]); 
                    //         }
                    //     }
                    // }
                    // else{
                    //     int f = 0; 
                    //     // int k = size; 
                    //     for(int k = size; k < tempsize; k++){
                    //         if(temp[k] > (dq[k%size])){
                    //             f = 1; break; 
                    //         } 
                    //         else if(temp[k] < (dq[k%size])){
                    //             break; 
                    //         } 
                    //     } 
                    //     if(!f){
                    //         for(int j = tempsize-1; j >= 0; j--){
                    //             dq.push_front(temp[j]); 
                    //         }
                    //     }
                    //     else{
                    //         for(auto &ch : temp) dq.pb(ch); 
                    //     }
                    // }
                }
            } 
        }
        string ans; 
        for(auto &it : dq) ans.pb(it); 
        cout<<ans<<endl; 
    }
}