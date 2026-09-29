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
        sort(arr.rbegin(), arr.rend()); 
        if(n == 1){
            cout<<"Yes"<<endl; continue; 
        } 
        vector<int> temp = {0, 1, 0, 3, 0, 5, 0, 7, 0, 9}; 
        int found = 0; 
        for(int i = 1; i < n; i++){
            int f = 0; 
            int t = arr[i-1];  
            for(int j = 0; j <= 4; j++) {    
                   // target   
                // if((t%10) &1){
                //     t += (t%10); 
                // }
                int cur = arr[i]; 
                if(t == cur){
                    continue; 
                }
                int lastDigit = cur % 10; 
                cur += temp[lastDigit]; 
                if(t == cur){
                    continue; 
                } 
                if(cur > t){
                    f+=1; t += (t%10); continue; 
                } 
                if(lastDigit != 5 && lastDigit != 0){
                    int want = t-cur; 
                    int div = want / 20; 
                    cur += (div *20); 
                    int num = ((temp[lastDigit]+lastDigit)%10); 
                    while(cur < t){
                        cur += num; 
                        num = cur%10; 
                        if(cur == t){
                            break; 
                        }
                    }
                }
                if(cur != t){
                    f+=1; 
                } 
                // if(!found){
                //     cout<<"Yes"<<endl; 
                // }
                t += (t%10); 
            }
            if(f == 5){
                found = 1; cout<<"No"<<endl; 
                break; 
            }
        } 
        if(!found){
            cout<<"Yes"<<endl; 
        }
    }
}