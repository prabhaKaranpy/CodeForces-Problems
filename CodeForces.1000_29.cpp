#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); 
using namespace std; 
int main(void){ 
    FastIO; 
    int T; cin>>T; 
    while(T--){
        ll a, b; cin>>a>>b; 
        ll mini = min(a,b), maxi = max(a, b); 
        if(a == b) cout<<0<<endl; 
        else if(!(maxi % mini)){ 
            ll ans = maxi / mini; 
            if(ans & 1LL) cout<<-1<<endl; 
            else{
                ll twos = 0; 
                int found = 0; 
                while(ans > 1LL){
                    if(ans & 1LL){
                        found = 1; 
                        cout<<-1<<endl; 
                        break; 
                    } 
                    twos ++; 
                    ans /= 2LL; 
                }
                if(!found){
                    ll res = twos/3LL; 
                    if(twos%3LL) res += 1LL; 
                    cout<<res<<endl; 
                }
            }
        } 
        else cout<<-1<<endl; 
    }
}