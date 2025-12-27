#include<bits/stdc++.h>
using namespace std;
int main(void){         // over all a collapse ;)
    int8_t compare = 2;
    vector<int8_t> arr(5);
    for(int i = 0; i < 5; i++) cin>>arr[i];
    for(auto &it : arr) cout<<static_cast<int>(it)<<"  ";
    cout<<endl;
    cout<<static_cast<int>(compare)<<endl;
    cout<<"arr[0] : "<<static_cast<int>(arr[0])<<endl;
    if(static_cast<int>(arr[0]) == static_cast<int>(compare)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    cout<<endl;
}
