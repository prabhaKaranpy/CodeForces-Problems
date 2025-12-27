#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int j = 1;
        cout<<(2*n)-1<<endl; // k - no. of times the operation is performed! (where k <= 2n);
        for(int i = 1; i <= n; i++){
            cout<<i<<" "<<j<<" "<<i<<endl;
        }
        j = n;
        for(int i = n-1; i >= 1; i--){
            cout<<i<<" "<<i+1<<" "<<j<<endl;
        }
    }
}
