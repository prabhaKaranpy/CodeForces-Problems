#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int n;
        char c;
        cin>>n>>c;
        string s; cin>>s;
        if(c == 'g') cout<<0<<endl;
        else{
            vector<int> distance(n);
            int i = n-1;
            int lastG = n-1;
            int found = 0;
            while(i >= 0){
                if(s[i] == 'g'){
                    if(!found){
                        lastG = i;
                        found = 1;
                    }
                    int j = i-1;
                    while(j >= 0 && s[j] != 'g'){
                        distance[j] = i-j;
                        j--;
                    }
                    i = j;
                }
                else i--;
            }
            int index = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == 'g'){
                    index = i;
                    break;
                }
            }
            for(int i = lastG+1; i < n; i++){
                distance[i] = n + index - i;
            }
            int maxi = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == c){
                    maxi = max(maxi, distance[i]);
                    // int count = 0;
                    // for(int j = i+1; j < (2*n); j++){
                    //     count ++;
                    //     if(s[j%n] == 'g'){
                    //         maxi = max(maxi, count);
                    //         break;
                    //     }
                    // }
                }
            }
            // for(int &it : distance) cout<<it<<" ";
            // cout<<endl;
            cout<<maxi<<endl;
        }
    }
}
