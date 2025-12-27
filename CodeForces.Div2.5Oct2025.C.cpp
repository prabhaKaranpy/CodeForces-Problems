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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int found = 0; 
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]){
                found = 1; break; 
            } 
        } 
        if(!found){
            int ans = 0; 
            vector<char> a(n); 
            a[0] = 'R'; 
            for(int i = 1; i < n; i++){
                if(a[i-1] == 'L') a[i] = 'R'; 
                else a[i] = 'L';  
            } 
            int count = 1; 
            for(int i = 1; i < n; i++){
                if(a[i] == 'R') count ++; 
            } 
            if(count == arr[0]) ans += 1; 
            count = 1; 
            a[0] = 'L'; 
            for(int i = 1; i < n; i++){
                if(a[i-1] == 'L') a[i] = 'R'; 
                else a[i] = 'L'; 
            } 
            for(int i = 1; i < n; i++){
                if(a[i] == 'R') count ++; 
            } 
            if(count == arr[0]) ans += 1; 
            cout<<ans<<endl; 
        } 
        else{
            int invalid = 0; 
            vector<char> a(n); for(char &ch : a) ch = 'n'; 
            // for(auto &it : a) cout<<it<<" "; 
            // cout<<endl; 
            for(int i = 1; i < n; i++){
                int delta = arr[i] - arr[i-1]; 
                if(delta == 1){
                    a[i] = 'L'; 
                    if(a[i-1] == 'n' || a[i-1] == 'L') a[i-1] = 'L'; 
                    else{
                        invalid = 1; break; 
                    }
                } 
                else if(delta == -1){
                    a[i] = 'R'; 
                    if(a[i-1] == 'n' || a[i-1] == 'R') a[i-1] = 'R'; 
                    else{
                        invalid = 1; break; 
                    } 
                } 
                else if(delta == 0){
                    continue; 
                } 
                else{
                    invalid = 1; 
                    break; 
                }
            }
            if(invalid) cout<<0<<endl; 
            else{
                for(int i = 0; i < n; i++){
                    if(a[i] == 'n'){
                        int found = 0, index = -1; 
                        for(int j = i+1; j < n; j++){
                            if(a[j] != 'n'){
                                found = 1; 
                                index = j; 
                                break; 
                            } 
                        }
                        if(!found){
                            for(int j = 0; j < i; j++){
                                if(a[j] != 'n'){
                                    found = 1; 
                                    index = j; 
                                    break; 
                                }
                            } 
                            for(int j = index+1; j < n; j++){
                                if(a[j] == 'n'){
                                    if(a[j-1] == 'R') a[j] = 'L'; 
                                    else a[j] = 'R'; 
                                }
                            }
                        }
                        else{
                            for(int j = index-1; j >= 0; j--){
                                if(a[j] == 'n'){
                                    if(a[j+1] == 'R') a[j] = 'L'; 
                                    else a[j] = 'R'; 
                                }
                            } 
                            for(int j = index+1; j < n; j++){
                                if(a[j] == 'n'){
                                    if(a[j-1] == 'R') a[j] = 'L'; 
                                    else a[j] = 'R'; 
                                }
                            } 

                        }
                    }
                } 
                // for(auto &it : a) cout<<it<<" "; 
                // cout<<endl; 
                vector<int> prefR(n, 0); 
                vector<int> prefL(n, 0); 
                for(int i = 1; i < n; i++){
                    if(a[i-1] == 'L'){
                        prefL[i] += 1; 
                    } 
                    prefL[i] += prefL[i-1]; 
                } 
                for(int i = n-2; i >= 0; i--){
                    if(a[i+1] == 'R'){
                        prefR[i] += 1; 
                    } 
                    prefR[i] +=  prefR[i+1]; 
                } 
                // for(auto &it : prefL) cout<<it<<" "; 
                // cout<<endl; 
                // for(auto &it : prefR) cout<<it<<" "; 
                // cout<<endl; 
                vector<int> ans(n, 1); 
                for(int i = 0; i < n; i++){
                    ans[i] += prefL[i]; 
                    ans[i] += prefR[i]; 
                }
                // for(int i = 1; i < n-1; i++){
                //     ans[i] += prefL[i-1]; 
                //     ans[i] += prefR[i+1]; 
                // } 
                // ans[0] += prefR[1]; 
                // ans[n-1] += prefL[n-2]; 
                for(int i = 0; i < n; i++){
                    if(ans[i] != arr[i]){
                        invalid = 1; 
                        break; 
                    }
                }
                if(invalid) cout<<0<<endl; 
                else cout<<1<<endl; 
            }
        }
    }
}