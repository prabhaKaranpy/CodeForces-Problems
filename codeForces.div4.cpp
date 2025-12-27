#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        string p;
        cin>>p;
        string s;
        cin>>s;
        int n = p.size();
        int m = s.size();
        int prev = 0;
        int j = 0;
        int found = 0;
        int i = 1;
        int ilen = 1;
        while(i < n){
            if(p[i] != p[prev]){
                prev = i;
                char ch = p[i-1];
                int len = 0;
                if(ch != s[j]){
                    found = 1;
                    cout<<"NO"<<endl;
                    break;
                }
                while(j < m){
                    if(s[j] == ch){
                        len ++;
                    }
                    else{
                        break;
                    }
                    j++;
                }
                if((len < ilen) || (len > (2*ilen))){
                    found = 1;
                    cout<<"NO"<<endl;
                    break;
                }
                ilen = 1;
            }
            else{
                ilen++;
            }
            i++;
        }
        if(!found){
            char ch = p[prev];
            int count = 0;
            while(j < m){
                count ++;
                if(count > (2*ilen)){
                    found = 1;
                    cout<<"NO"<<endl;
                    break;
                }
                if(ch != s[j]){
                    cout<<"NO"<<endl;
                    found = 1;
                    break;
                }
                j++;

            }
            if((!found) && (count < ilen)){
                found = 1;
                cout<<"NO"<<endl;
            }
        }
        if(!found) cout<<"YES"<<endl;
    }
}
