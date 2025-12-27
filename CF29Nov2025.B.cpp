#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
static bool comp(pair<int, int> &a, pair<int, int> &b) {
    return a.first > b.first; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int m; cin>>m; 
        int n = 2*m; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        map<int, int> mp; 
        for(auto &it : arr) mp[it] ++; 
        int ans = 0, evenCount = 0, oddAndEvenCount = 0; 
        for(auto &[x, y] : mp){
            if(y == 1){
                ans ++; 
                oddAndEvenCount ++; 
                continue;  
            }
            if(y&1){
                ans += 1; 
                oddAndEvenCount ++; 
            } 
            else{
                if((y/2)&1){
                    ans += 2; 
                } 
                else{
                    evenCount ++; 
                } 
            } 
        } 
        while(evenCount > 0){
            if(evenCount >= 2){
                evenCount -= 2; 
                ans += 4; 
            } 
            else if(evenCount == 1){
                if(oddAndEvenCount > 0){
                    ans += 2; 
                    evenCount --; oddAndEvenCount --; 
                }
                else{
                    evenCount --;  
                }
            }
        } 
        // if(evenCount > 0){
        //     if(oddAndEvenCount > 0){
        //         ans += 2; 
        //     }
        // }
        cout<<ans<<endl; 

        // vector<int> p, q; 
        // sort(arr.begin(), arr.end()); 
        // for(int i =0; i <n; i++){
        //     if(i&1){
        //         q.pb(arr[i]); 
        //     } 
        //     else{
        //         p.pb(arr[i]); 
        //     } 
        // } 
        // map<int, int> mp; 
        // map<int, int> mq; 
        // for(int &it : p) mp[it] ++; 
        // for(int &it : q) mq[it] ++; 
        // map<int, int> mp; 
        // for(int &it : arr){
        //     mp[it] ++; 
        // } 
        // int p = 0, q = 0; 
        // int game = 1; 
        // int ans = 0; 
        // vector<int> A; 
        // for(auto &it : mp){
        //     int s = it.second; 
        //     if(s == 1){
        //         A.pb(s); 
        //         if(game){
        //             if(p+1 <= m){
        //                 p ++; 
        //                 ans ++; 
        //                 game ^= 1; 
        //             }
        //         } 
        //         else{
        //             if(q+1 <= m){
        //                 q ++; 
        //                 game ^= 1; 
        //                 ans ++; 
        //             }
        //         }
        //     } 
        //     else{
        //         if((s&1) && (s <= m) && ((p+s <= m) || q+s <= m)){
        //             ans ++; 
        //             if(game){
        //                 p += s; 
        //                 game ^= 1; 
        //             }
        //             else{
        //                 q += s; 
        //                 game ^= 1; 
        //             }
        //             continue; 
        //         }
        //         if(s&1){
        //             int one = s/2; 
        //             A.pb(one); A.pb(one+1); 
        //             if(game){
        //                 if(p+one <= m && q+one+1 <= m){
        //                     p += one; q += one +1; 
        //                     ans ++; 
                            
        //                 }
        //                 game ^= 1; 
        //             } 
        //             else{
        //                 if(p+one+1 <= m && q+one <= m){
        //                     p += one+1; q += one; 
        //                     ans ++; 
                            
        //                 }
        //                 game ^= 1; 
        //             }
        //         } 
        //         else{
        //             int one = s/2; 
        //             if(one&1){
        //                 A.pb(one); A.pb(one); 
        //                 if(p + one <= m && q +one <= m){
        //                     p += one; q += one; 
        //                     ans += 2; 
        //                 }
        //             } 
        //             else{
        //                 A.pb(one-1); A.pb(one+1); 
        //                 if(game){
        //                     if(p+one-1 <= m && q+one+1 <= m){
        //                         p += one -1; q += one +1; 
        //                         ans += 2; 
        //                         game ^= 1; 
        //                     } 
        //                 } 
        //                 else{
        //                     if(p + one + 1 <= m && q + one-1 <= m){
        //                         p += one +1; q += one-1; 
        //                         ans += 2; 
        //                         game ^= 1; 
        //                     } 
        //                 } 
        //             } 
        //         } 
        //     } 
        // }
        // sort(A.begin(), A.end()); 
        // for(auto &it : A) cout<<it<<" "; 
        // cout<<endl; 
        // for(auto &it : A){
        //     if(it&1){
        //         if(p-it >= 0){
        //             ans ++; 
        //             p -= it; 
        //         } 
        //         else if(q-it >= 0){
        //             ans ++; 
        //             q -= it; 
        //         } 
        //         else{
        //             ans --; 
        //         }
        //     } 
        // } 
        // cout<<ans<<endl; 
        // vector<pair<int,int>> A; 
        // for(auto &it : mp){
        //     A.pb({it.second, it.first}); 
        // } 
        // sort(A.begin(), A.end(), comp); 
        // for(auto &it : A){
        //     cout<<it.first<<" : "<<it.second<<endl; 
        // } 
        // int p = m, q = m; 
        
        // for(auto &it : A){
            
        // }
        // int f1 = 0, f2 = 0; 
        // int ans = 0; 
        // int p = m, q = m; 
        // for(auto &it : mp){
        //     if((it.second)&1){
        //         int one = it.second/2; int two = one +1; 

        //         ans ++; 
                
        //     } 
        //     else{
        //         if(!((it.second/2)&1) && (it.second/2)+1 <= m){
        //             ans += 2; 
        //         }
        //         else if((it.second/2)&1){
        //             ans += 2; 
        //         }
        //     } 
        // } 
        // cout<<ans<<endl; 
    }
}