#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){      // PROBLEM I GOT TLE ON 26 JULY 2024... UPSOLVING IT ALMOST AFTER 2.2 YEARS...   
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, q; cin>>n>>q; 
        string a, b; cin>>a>>b; 
        map<int, vector<int>> mp, mpb; 
        vector<int> hash(26), hashb(26); 
        for(int i= 0; i < n; i++){
            hash[a[i]-97] ++; hashb[b[i]-97] ++; 
            mp[i] = hash; 
            mpb[i] = hashb; 
        }
        for(int i = 0; i < q; i++){
            int l, r; cin>>l>>r; 
            l--; r --; 
            vector<int> arrA = mp[r], arrB = mpb[r]; 
            if(l-1 >= 0){
                vector<int> tempA = mp[l-1]; 
                for(int i = 0; i < 26; i++){
                    arrA[i] -= tempA[i]; 
                } 
                vector<int> tempB = mpb[l-1]; 
                for(int i= 0; i < 26; i++){
                    arrB[i] -= tempB[i]; 
                } 
            } 
            int count = 0; 
            for(int i = 0; i < 26; i++){
                count += abs(arrA[i] - arrB[i]); 
            } 
            count /= 2LL; // pwtpw... count/=2 because of if different elements means, both indices have different elements, so one change can fix both elements, so we count total different elements and make it as count /= 2... "count/=2" is the no. of fixes needed... that's the answer requiered as well as possible... 
            cout<<count<<endl; 
        } 
    } 
} 
