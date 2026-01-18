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
        int n,m, k; cin>>n>>m>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> b(m); for(int &it : b) cin>>it; 
        string s; cin>>s; 
        vector<int> pref(k); pref[0] = ((s[0] == 'R') ? 1 : -1); 
        for(int i= 1; i < k; i++){
            if(s[i] == 'R') pref[i] = pref[i-1] + 1; 
            else pref[i] = pref[i-1] -1; 
        } 
        vector<int> right, left; 
        sort(b.begin(), b.end()); 
        for(int i= 0; i < n; i++){
            int temp = arr[i]; 
            auto ub = upper_bound(b.begin(), b.end(), temp); 
            if(ub != b.end()){
                int dist = b[(int)(ub-b.begin())] - temp; 
                right.pb(dist); 
            } 
            auto lb = lower_bound(b.begin(), b.end(), temp); 
            if(lb != b.end()){
                if((int)(lb-b.begin())-1 >= 0){
                    int dist = temp - b[((int)(lb-b.begin())-1)]; 
                    left.pb(dist); 
                }
            }
            else{
                int dist = (temp - (b[m-1])); 
                left.pb(dist); 
            }
        }
        sort(right.begin(), right.end()); sort(left.begin(), left.end()); 

        int count = n; 
        // cout<<"Right : "<<endl; 
        // for(auto &it : right) cout<<it<<" "; 
        // cout<<endl; 
        // cout<<"Left : "<<endl; 
        // for(auto &it : left) cout<<it<<" "; 
        // cout<<endl; 
        int leftSize = left.size(), rightSize = right.size(); 
        for(int i = 0; i <k; i++){
            if(pref[i] == 0) cout<<count<<" "; 
            else if(pref[i] < 0){
                int temp = pref[i] * -1; 
                if((int)(leftSize) == 0){
                    count = max(count, 0LL); 
                    cout<<count<<" "; 
                    continue; 
                }
                auto ub = upper_bound(left.begin(), left.end(), temp); 
                if(ub != left.end()){
                    int index = ub - left.begin(); 
                    count = min(count, ((int)(left.size()) - index)); 
                }
                else{
                    count = count - (left.size()); 
                    leftSize = 0; 
                }
                count = max(count, 0LL); 
                cout<<count<<" "; 
            } 
            else{
                int temp = pref[i]; 
                if((int)(rightSize) == 0){
                    count = max(count, 0LL); 
                    cout<<count<<" "; 
                    continue; 
                }
                auto ub = upper_bound(right.begin(), right.end(), temp); 
                if(ub != right.end()){
                    int index = ub - right.begin(); 
                    count = min(count, ((int)(right.size()) - index)); 
                }
                else{
                    count = count - rightSize; 
                    rightSize = 0; 
                }
                count = max(count, 0LL); 
                cout<<count<<" "; 
            }
        } 
        cout<<endl; 
    }
} 