#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
vector<int> ero(int n) {
    vector<int> primes; 
    vector<int> seive(n+1, 1); 
    seive[0] = 0; seive[1] = 0; 
    for(int i = 2; i * i <= n; i++){
        if(seive[i]){
            for(int j = i * i; j <= n; j +=i) seive[j] = 0; 
        }
    }
    for(int i = 2; i <= n; i++){
        if(seive[i]) primes.pb(i);
    }
    return primes;    
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        
    }
}