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
        vector<int> a(n); for(int &it : a) cin>>it; 
        set<int> stt(a.begin(), a.end()); 
        vector<int> arr; for(auto &it : stt) arr.pb(it); 
        int size = arr.size(); 
        vector<int> dist(n+1); 
        queue<pair<int, int>> qu; 
        for(auto &it : arr){
            qu.push({it, 1}); 
            dist[it] = 1; 
        }
        while(!qu.empty()){
            auto [product, numberOfElements] = qu.front(); qu.pop(); 
            for(auto &it : arr){
                if((product * it) > n) break; 
                if((!dist[product * it])){
                    qu.push({(product * it), numberOfElements+1}); 
                    dist[product*it] = numberOfElements+1; 
                }
            }
        } 
        for(int i = 1; i <= n; i++){
            if(dist[i]) cout<<dist[i]<<" "; 
            else cout<<-1<<" "; 
        } 
        cout<<endl; 
        // cout<<"Arr : "<<" "; 
        // for(auto &it : arr) cout<<it<<" "; 
        // cout<<endl; 
        // for(int ii = 1; ii <= n; ii++){
        //     int i = ii; 
        //     int count = 0; 
        //     int found = 0; 
        //     int index = -1; 
        //     auto lb = lower_bound(arr.begin(), arr.end(), i); 
        //     if(lb == arr.end()) index = size-1; 
        //     else index = lb - arr.begin(); 
        //     int start = index; 
        //     while(start >= 0){
        //         if(arr[start] == 1){
        //             if(i == 1){
        //                 if(count == 0) count = 1; 
        //                 break; 
        //             }
        //             count = 0; break; 
        //         }
        //         if(!(i % arr[start])){
        //             while(!(i % arr[start])){
        //                 count ++; 
        //                 i /= arr[start]; 
        //                 if(i == 1){
        //                     found = 1; 
        //                     break; 
        //                 }
        //             } 
        //             if(found) break; 
        //             auto lb = lower_bound(arr.begin(), arr.end(), i); 
        //             if(lb == arr.end()) start = start-1; 
        //             else start = lb - arr.begin(); 
        //         }
        //         else{
        //             start --; 
        //         }
        //     } 
        //     if(i > 1 && start < 0){
        //         cout<<-1<<" "; continue; 
        //     }
        //     if(count == 0) cout<<-1<<" "; 
        //     else cout<<count<<" "; 
        // }
        // cout<<endl; 
    }
}






// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n; 
//     cin >> n;
    
//     // Use a frequency map or set to get distinct elements
//     // We only care about distinct values for transitions
//     vector<int> a(n);
//     vector<int> distinct_elements;
//     vector<bool> exists(n + 1, false);
    
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//         if(!exists[a[i]]){
//             exists[a[i]] = true;
//             distinct_elements.push_back(a[i]);
//         }
//     }
    
//     // Sort distinct elements to optimize the BFS loop (break early)
//     sort(distinct_elements.begin(), distinct_elements.end());
    
//     // dist[i] stores the min elements to get product i
//     // Initialize with -1 (unreachable)
//     vector<int> dist(n + 1, -1);
    
//     // Base case: We start at product 1 with 0 steps.
//     dist[1] = 0;
    
//     queue<int> q;
//     q.push(1);
    
//     while(!q.empty()){
//         int u = q.front();
//         q.pop();
        
//         for(int x : distinct_elements){
//             long long next_val = (long long)u * x;
            
//             // If product exceeds n, we stop. 
//             // Since distinct_elements is sorted, all subsequent x will also exceed n.
//             if(next_val > n) break;
            
//             if(dist[next_val] == -1){
//                 dist[next_val] = dist[u] + 1;
//                 q.push(next_val);
//             }
//         }
//     }
    
//     // Output results
//     for(int i = 1; i <= n; i++){
//         if(i == 1){
//             // Special case for 1: The problem requires selecting "at least one element".
//             // dist[1] is 0 (from initialization), but we need at least 1 element.
//             // We can only get product 1 if the input array actually contains '1'.
//             if(exists[1]) cout << 1 << " ";
//             else cout << -1 << " ";
//         }
//         else {
//             cout << dist[i] << " ";
//         }
//     }
//     cout << "\n";
// }

// int main(){
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr);
//     int t; 
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }