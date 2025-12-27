#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<char> arr(n);
        for(char &it : arr) cin>>it;
        if(n == 2){
            if(arr[0] == 'A') cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
        else{
            if(arr[n-1] == 'A'){
                if(arr[0] == 'A') cout<<"Alice"<<endl;
                else if(arr[n-2] == 'A'){
                    cout<<"Alice"<<endl;
                }
                else cout<<"Bob"<<endl;
            }
            else if(arr[n-1] == 'B'){
                if(arr[0] == 'B') cout<<"Bob"<<endl;
                else if(arr[n-2] == 'B') cout<<"Bob"<<endl;
                else if(arr[0] == 'A'){
                    int j = n-2;
                    int found = 0;
                    while(j > 0){
                        if(arr[j] == 'B'){
                            found = 1; break;
                        }
                        j--;
                    }
                    if(found){
                        cout<<"Bob"<<endl;
                    }
                    else cout<<"Alice"<<endl;
                }
            }
        }
    }
}
