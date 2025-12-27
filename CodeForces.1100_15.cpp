#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        string s; cin>>s; 
        // s.append(s); 
        int n = s.size(); 
        int total = 0; 
        for(char &ch : s){
            if(ch == '1') total ++; 
        } 
        if(total == n) cout<<n*n<<endl; 
        else{
            string temp; 
            int found = 0; 
            int found2 = 0, index = -1; 
            for(int i = n-1; i >= 0; i--){
                if(s[i] == '0'){
                    found = 1; 
                    index = i; 
                    break; 
                } 
                temp.push_back(s[i]); 
            } 
            for(int i = 0; i < index; i++){
                if(s[i] == '1'){
                    found2 = 1; break; 
                } 
            } 
            if(found & found2){
                reverse(s.begin(), s.end()); 
                s.append(temp); 
            }
            n = s.size(); 
            int i = 0; 
            int maxi = 0; 
            int count = 0; 
            while(i < n){
                if(s[i] == '1'){
                    int j = i; 
                    count = 0; 
                    while(j < n){
                        if(s[j] == '1'){
                            count ++; 
                            j ++; 
                        } 
                        else{
                            i = j; 
                            maxi = max(maxi, count); 
                            break; 
                        }
                    } 
                    i = j; 
                } 
                else i ++; 
            } 
            maxi = max(maxi, count); 
            if(maxi&1){
                cout<<(((maxi/2)+1) * ((maxi/2)+1))<<endl; 
            } 
            else cout<<(((maxi/2) * ((maxi/2)+1)))<<endl; 
        }
    }
}
