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
        int a, b, c, m; cin>>a>>b>>c>>m; 
        int atotal = 0, btotal = 0, ctotal = 0; 
        int acommon = 0, bcommon = 0, ccommon = 0; 
        int adays = m / a, bdays = m / b, cdays = m / c; 
        int common = m / lcm(a,lcm(b,c)); 
        if(common > 0){
            acommon = (2LL * common); 
            bcommon = 2LL * common; ccommon = 2LL * common; 
        } 
        int ab = (m / lcm(a,b)), ac = (m / lcm(a,c)); 
        int aa = adays - common; ab -= common; ac -= common; 
        atotal += (ab * 3); btotal += (ab * 3); 
        aa -= ab; 
        atotal += (ac * 3); ctotal += (ac * 3); 
        aa -= ac; 
        if(aa > 0){
            acommon += (aa * 6); 
        } 
        int ba = (m / lcm(b,a)), bc = (m / lcm(b,c)); 
        int bb = bdays - common; ba -= common; bc -= common; 
        btotal += (ba * 3); atotal += (ba * 3); 
        bb -= ba; 
        btotal += (bc * 3); ctotal += (bc * 3); 
        bb -= bc; 
        if(bb > 0){
            bcommon += (bb * 6); 
        } 
        int ca = (m / lcm(c,a)), cb = (m / lcm(c,b)); 
        int cc = cdays - common; ca -= common; cb -= common; 
        ctotal += (ca * 3); atotal += ( ca * 3); 
        cc -= ca; 
        ctotal += ( cb * 3); btotal += ( cb * 3); 
        cc -= cb; 
        if(cc > 0) ccommon += (cc * 6); 
        int first = acommon + (atotal/2); 
        int second = bcommon + (btotal / 2); 
        int third = ccommon + (ctotal /2 ); 
        cout<<first<<" "<<second<<" "<<third<<endl; 
    }
}