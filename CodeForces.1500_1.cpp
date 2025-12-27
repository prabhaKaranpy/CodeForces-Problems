#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
using ll = long long; 
#define int long long
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<pair<int, int>> arr(n); 
        for(auto &it : arr){
            cin>>it.first>>it.second; 
        } 
        // map<int, int> findingEnd, findingStart; 
        // for(auto &it : arr){
        //     findingEnd[it.first] = it.second; 
        // } 
        // for(auto &it : arr){
        //     findingStart[it.second] = it.first; 
        // } 
        // vector<int> a; 
        // for(auto &it : arr) a.pb(it.second); 
        // sort(a.begin(), a.end()); 
        ordered_set st; 
        sort(arr.begin(), arr.end()); 
        int ans = 0; 
        for(int i = 0; i < n; i++){
            ans += (i - (st.order_of_key(arr[i].second))); 
            st.insert(arr[i].second); 
        }
        cout<<ans<<endl; 
    }
}

// #include <bits/stdc++.h>
 
// using namespace std;
 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
 
// int t, n;
 
// vector<pair<int, int>> arr;
 
// long long ans;
 
// ordered_set st;
 
// void solve(){
//     cin >> n;
 
//     arr.assign(n, {});
 
//     for(auto &p : arr) cin >> p.second >> p.first;
 
//     sort(arr.begin(), arr.end());
 
//     ans = 0;
//     st.clear();
 
//     for(auto p : arr){
//         ans += st.size() - st.order_of_key(p.second);
 
//         st.insert(p.second);
//     }
 
//     cout << ans << "\n";
// }
 
// int main(){
//     ios_base::sync_with_stdio(false);cin.tie(NULL);
 
//     cin >> t;
 
//     while(t--){
//         solve();
//     }
// }